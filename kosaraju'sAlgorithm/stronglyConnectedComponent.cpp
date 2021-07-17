#include<bits/stdc++.h>
using namespace std;
void dfs(vector<int>adj[],int node,vector<int>&tin,vector<int>&low,vector<int>&visited,int time,int parent){

        visited[node]=1;
        tin[node]=low[node]=time++;
        for(auto it :adj[node]){
              if(it==parent) continue;
              if(!visited[it]){
                  dfs(adj,it,tin,low,visited,time,node);
                  low[node]=min(low[node],low[it]);
                  if(low[it]>low[node])
                  cout<<" "<<node<<" ";
              }
              else
              low[node]=min(low[node],tin[it]);
        }

}

int main(){
    int vertex,edges;
    cin>>vertex>>edges;

    vector<int>adj[vertex+1];
    while(edges--){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
    }
        vector<int>tin(vertex+1,-1);
        vector<int>low(vertex+1,-1);
        vector<int>visited(vertex+1,0);
        int time=0;
        for(int i=1;i<=vertex;i++){
              if(!visited[i]){
                  dfs(adj,i,tin,low,visited,time,-1);
              }
        }




    }
