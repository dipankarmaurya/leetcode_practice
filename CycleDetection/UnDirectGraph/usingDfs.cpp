#include<bits/stdc++.h>

using namespace std;
bool checkCycleUsingDfs(vector<int>adj[], vector<int>& visited,int curr,int prev){
    visited[curr]=1;
    for(auto x:adj[curr]){
        if(!visited[x]){
               if(checkCycleUsingDfs(adj,visited,x,curr))
                     return true;  
        } 
        else if(x!=prev)  return true;
    }
  return false;
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<int>adj[n+1];
    for(int i=0; i<m; i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<int>visited(n+1,0);
    int flag=0;
          for(int i=1;i<=n;i++){
              if(!visited[i]){
                  if(checkCycleUsingDfs(adj,visited,i,-1))
                       flag=1;
                  if(flag)
                  break;     
              }
          }
          if(flag)
          cout<<"I found a cycle in Undirected graph using dfs";
          else
          cout<<" no cycle is found";
}