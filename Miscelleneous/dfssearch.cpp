#include<bits/stdc++.h>
using namespace std;
int V;
list<int>*adj;
void addEdge(int u,int v){
	adj[u].push_back(v);
}
void visit(int v,bool visited[]){
	visited[v]=true;
	cout<<v<<" ";
	for(auto i:adj[v]){
		if(!visited[i])
		visit(i,visited);
	}
}
void DFS(int v){
	bool *visited =new bool[V];
	for(int i=0;i<V;i++){
		visited[i]=false;
	}
	visit(v,visited);
}
int main(){
	V=4;
	adj =new list<int>[V];
	addEdge(0, 1); 
    addEdge(0, 2); 
    addEdge(1, 2); 
    addEdge(2, 0); 
    addEdge(2, 3); 
    addEdge(3, 3); 
    DFS(2);
	
}
