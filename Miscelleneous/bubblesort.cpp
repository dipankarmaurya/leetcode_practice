#include<iostream>
using namespace std;
void bubbleSort(int [],int);
void bubbleSort(int arr[],int n){
	int i,j;
	for(i=0;i<n-1;i++)
	{ int flag=0;
		for(j=0;j<n-1-i;j++){
			if(arr[j]>arr[j+1]){
			int temp =arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;
			 flag=1;
			}
		}
		if(flag==0)break;
	}
	for(i=0;i<n;i++){
	cout<<arr[i]<<" ";
}
}
int main(){

int i;
 int  arr[100];
int n;
cout<<"enter the size of array\n";
cin>>n;
cout<<"enter element in array";
for(i=0;i<n;i++){
	cin>>arr[i];
}
    bubbleSort(arr ,n );
}
