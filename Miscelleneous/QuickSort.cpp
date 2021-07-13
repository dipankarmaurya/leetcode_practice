#include<iostream>
using namespace std;
void quicksort(int [],int ,int);
void swap(int *, int *);
int partion(int [],int ,int);
void swap(int *a, int *b){
	int temp= *a;
	*a=*b;
	*b=temp;
}
void quickSort(int a[],int lb,int ub){
	if(lb<ub){
     int loc = partion(a,lb,ub);
	quickSort(a,lb,loc-1);
	quickSort(a,loc+1,ub); }
}


int partion(int a[],int lb,int ub){
	int pivot = a[lb];
 int start=lb;
 int end =ub;	
 while(start<end){
 	while(pivot>=a[start])
 	{
 		start++;
	 }
	 while(pivot<a[end]){
	 	end--;
	 }
	 if(start<end)
	   {
	   	swap(&a[start],&a[end]);
	   }
}
 swap(&a[end],&a[lb]); 
   return end;
}
int main(){
  int i,j;
 int  a[100];
 int n;
 cout<<"enter the size of array\n";
 cin>>n;

  cout<<"enter element in array";
  for(i=0;i<n;i++){
	cin>>a[i];
}
    quickSort(a ,0,n-1);
     for(i=0;i<n;i++)
     cout<<a[i]<<" ";
}

