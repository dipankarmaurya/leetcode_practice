#include<bits/stdc++.h>
using namespace std;
  bool CheckCycleUsingBfs(vector<int>adj[], vector<int>&visited,int node){
          visited[node]=1;
          queue<pair<int,int>>que;
          que.push({node,-1});
          while(!que.empty()){
              auto pair = que.front();
              int curr = pair.first;
              int prev =  pair.second;
              que.pop();
              for(auto x: adj[curr]){
                  if(!visited[x]){
                      visited[x]=true;
                      que.push({x,curr});                    
                  }
                  else {
                      if(x!=prev)
                      return true;
                  }
              }
          }
          return false;
 }
int main(){
    int n,m;
    cin>>n>>m;
    vector<int>adj[n+1];
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<int>visited(n+1,0);
    int flag=0;
    for(int i=1;i<=n;i++){
            if(!visited[i]){
                if(CheckCycleUsingBfs(adj,visited,i))
                    flag=1;
                if(flag)
                break;    
            }
    }
    if(flag)
    cout<<"I found a cycle in indirected grapgh using BFS";
    else
    cout<<" Cycle not found";
}