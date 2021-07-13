#include<bits/stdc++.h>
using namespace std;
int V;

void addEdge(list<int>adj[],int u,int v){
	adj[u].push_back(v);
}
void BFS(list<int>adj[],int s){
	bool *visited = new bool[V];
	for(int i=0;i<V;i++)
	   visited[i]= false;
	list<int>q;   
	   visited[s]=true;
	   q.push_back(s);
	while(!q.empty()){
		s=q.front();
		cout<<s<<" ";
		q.pop_front();
		for(auto m:adj[s] ){
			if(!visited[m]){
				visited[m]=true;
				q.push_back(m);
			}
		}
	}
}
int main(){
	V=4;
	list<int>adj[V];
	addEdge(adj,0, 1); 
    addEdge(adj,0, 2); 
    addEdge(adj,1, 2); 
    addEdge(adj,2, 0); 
    addEdge(adj,2, 3); 
    addEdge(adj,3, 3); 
    BFS(adj,2);
    cout<<endl;
    for(auto i=0;i<V;i++){
    	cout<<i<<"->";
    	for(auto l:adj[i]){
    		cout<<l<<", ";
		}
		cout<<endl;
	}
}
