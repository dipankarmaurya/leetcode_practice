#include<bits/stdc++.h>
using namespace std;
void swap( int* x,int* y){
	int t = *x;
	*x=*y;
	*y=t;
}
int partition(vector<int>&v,int low,int high){
	int pivot=v[high];
	int i=low-1;
	for(int j=low;j<high;j++){
		if(v[j]<=pivot)
		  {	
		  	i++;
		  	if(i!=j)
		  	swap(&v[i],&v[j]);
		  }	  	
	}
	swap(&v[i+1],&v[high]);
	return i+1;
}
void quickSort(vector<int>&v,int low,int high){
	if(low<high){
		int loc=partition(v,low,high);
		quickSort(v,low,loc-1);
		quickSort(v,loc+1,high);
		
	}
}
int main(){
	int x;
	int n;
	cin>>n;
	vector<int>v;
	while(n--){
		cin>>x;
		v.push_back(x);
	}
	quickSort(v,0,v.size()-1);
	for(auto x:v){
		cout<<x<<" ";
	}
}
