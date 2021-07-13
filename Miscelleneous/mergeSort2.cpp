#include <bits/stdc++.h>
using namespace std;

void mergedsc(int [],int,int,int);
void mergeSortdsc(int [],int ,int);
void mergeSortdsc(int a[],int lb,int ub){
	if(lb<ub){
	
        int mid=(lb+ub)/2;
        mergeSortdsc(a,lb,mid);
        mergeSortdsc(a,mid+1,ub);
        mergedsc(a,lb,mid,ub);
   }
}
void mergedsc(int a[],int lb,int mid,int ub){
    int b[10000];
    int p=0;
    int k=lb;
    int i=lb;
    int j=mid+1;
    while(i<=mid&&j<=ub){
        if(a[i]>=a[j]){
            b[k]=a[i];
            i++;k++;
        }
        else{
            b[k]=a[j];
            j++;k++;
        }
    }
    if(i>mid){
        while(j<=ub){
            b[k]=a[j];
            k++;j++;
        }
    }
    else if(j>ub){
        while(i<=mid){
            b[k]=a[i];
            i++;k++;
        }
    }
     for(i=0;i<=ub;i++)
        a[i]=b[i];
   
}

int main(){
int a[100];
int i,j;
int n;

cin>>n;
for(i=0;i<n;i++){
    cin>>a[i];
}
mergeSortdsc(a,0,n-1);
 for(i=0;i<n;i++)
   cout << a[i]<<" ";
}

