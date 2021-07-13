#include<iostream>
using namespace std;
 void insertionSort(int [],int );
 void insertionSort(int arr[],int n){
  int i,j;
   for(i=1;i<n;i++){
    int temp=arr[i];
     j=i-1;
     while(j>=0&&temp<arr[j])
     {
  	  arr[j+1]=arr[j];
  	  j--;
     }
     arr[j+1]=temp;
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
    insertionSort(arr ,n );
}
