#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<int>v;
	int n,x;
	int k;
	cin>>n>>k;
	float a[1000];
	for(int i=0;i<n;i++){
		cin>>x;
		v.push_back(x);
	}
	sort(v.begin(),v.end());
	for(int i=0;i<=n-k;i++){
		if(k%2!=0){
			a[i]=v[(k-1)/2+i];
		}
		else
		a[i]=(v[(k/2)-1+i]+v[(k/2)+i])/2.0;
		
	cout<<a[i]	<<" ";
	}
}
