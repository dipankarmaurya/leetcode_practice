#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	vector<pair<int,int>>graph[n+1];
	for(int i=0;i<m;i++){
		int u,v,w;
		cin>>u>>v>>w;
	
		//directed weighted graph
		
		
	//	graph[u].push_back({v,w});
	
	
	//undirected weighted graph
     	graph[u].push_back({v,w});
     	graph[v].push_back({u,w});
	}
	return 0;
}
