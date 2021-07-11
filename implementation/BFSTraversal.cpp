#include<bits/stdc++.h>
using namespace std;

void bfs(int n,vector<int>graph[]){
	vector<int>bfs;
	vector<int>vis(n+1,0);
	for(int i=1;i<=n;i++){
		if(!vis[i]){
			queue<int>que;
			que.push(i);
			vis[i]=1;
			while(!que.empty()){
				int val=que.front();
				que.pop();
				bfs.push_back(val);
				for(auto x:graph[val]){
					if(!vis[x]){
					que.push(x);
					vis[x]=1;
					cout<<" "<<x<<endl;}
				}
			}
		}
	}
	for(auto x:bfs){
		cout<<x<<" ";
	}
}

int main(){
	int n,m;
	cin>>n>>m;
	vector<int>graph[n+1];
	
	for(int i=0 ;i<m;i++){
		int u,v;
		cin>>u>>v;
		graph[u].push_back(v);
		graph[v].push_back(u);	
	}
    	bfs( n,graph);
	return 0;
}

