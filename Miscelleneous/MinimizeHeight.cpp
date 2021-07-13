 #include<bits/stdc++.h>
 using namespace std;
void merge(int arr[],int l,int m,int r){
        int n1=m-l+1;
        int n2=r-m;
        int a[n1],b[n2];
        for(int i=0;i<n1;i++){
            a[i]=arr[l+i];
        }
        for(int j=0;j<n2;j++)
        b[j]=arr[m+1+j];
    
    int i=0;
    int j=0;
    int k=l;
    while(i<n1&&j<n2){
        if(a[i]<b[j]){
            arr[k]=a[i];
            i++;
        }
        else{
            arr[k]=b[j];
            j++;
        }
        k++;
    }
    while(i<n1){
        arr[k]=a[i];
        i++;k++;
    }
    while(j<n2){
        arr[k]=b[j];
        j++;k++; 
    }
}
void mergeSort(int arr[],int l,int r){
    if(l<r){
        int mid=(l+r)/2;
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);
        merge(arr,l,mid,r);
    }
}
  
  
    int getMinDiff(int arr[], int n, int k) {
        mergeSort(arr,0,n-1);
    int ans = arr[n-1]-(arr[0]+2*k);
    return ans;
    }
    int main(){
    	int n,k;
    	int arr[1000];
    	cin>>n;
    	cin>>k;
    	for(int i=0;i<n;i++){
    		cin>>arr[i];
		}
	int l=	getMinDiff(arr,n,k);
	cout<<l;
	
	}
