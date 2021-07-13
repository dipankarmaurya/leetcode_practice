#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	unordered_map<string,list<pair<string,int>>>v;
	cin>>n;
	string x,y;
	int w;
	for(int i=0;i<n;i++){
		cin>>x>>y>>w;
		v[x].push_back(make_pair(y,w));
		v[y].push_back(make_pair(x,w));
	}
         for(auto V :v){
		 cout<<V.first<<"->";
		 list<pair<string,int>>nbr=V.second;
		for(auto nbrs:nbr){
			cout<<"("<<nbrs.first<<","<<nbrs.second<<"),";
		}
		cout<<endl;
   }
}
