#include<iostream>
using namespace std;
 void selectionSort(int [],int );
 void selectionSort(int arr[],int n){
  int i,j;
   for(i=0;i<n-1;i++){
    int min=i;
     for(j=i+1;j<n;j++){
        if(arr[min]>arr[j])
         min=j;
	   }
	   if(i!=min)
	   {
	   	int temp=arr[i];
	   	arr[i]=arr[min];
	   	arr[min]=temp;
	   }
   }
   for(i=0;i<n;i++)
   cout <<arr[i]<<" ";
}
int main(){

int i,j;
 int  arr[100];
int n;
cout<<"enter the size of array\n";
cin>>n;
cout<<"enter element in array";
for(i=0;i<n;i++){
	cin>>arr[i];
}
    selectionSort(arr ,n );
}
