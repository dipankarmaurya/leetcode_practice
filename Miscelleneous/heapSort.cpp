#include<bits/stdc++.h>
using namespace std;
void swap(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}
void heapify(vector<int>&arr,int n,int i){
	int largest=i;
	int low=2*i+1;
	int high=2*i+2;
	if(low<n&&arr[low]>arr[largest])
	largest=low;
	if(high<n&&arr[high]>arr[largest])
		largest=high;
	if(i!=largest){
		swap(&arr[i],&arr[largest]);
	    heapify(arr,n,largest);	  
	}
}
void heapSort(vector<int>&arr,int n){
	for(int i=n/2-1;i>=0;i--){
		heapify(arr,n,i);
	}
	for(int i=n-1;i>=0;i--){
		swap(&arr[0],&arr[i]);
		heapify(arr,i,0);
	}
}
int main(){
	int n,x;
	cin>>n;
	vector<int>arr;
	while(n--){
		cin>>x;
		arr.push_back(x);
	}
	heapSort(arr,arr.size()-1);
	for(auto x:arr)
	cout<<x<<" ";
}
