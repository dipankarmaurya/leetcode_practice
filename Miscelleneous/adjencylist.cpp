#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	vector<vector<int>>v;
	int e;
	cin>>n>>e;
	v.assign(n,vector<int>());
	int x,y;
	for(int i=0;i<e;i++){
		cin>>x>>y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	for(int i=0;i<n;i++){
		cout<<i<<"->";
		for(int nbr:v[i]){
			cout<<nbr<<",";
		}
		cout<<endl;
	}
}
