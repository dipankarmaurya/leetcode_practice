#include<bits/stdc++.h>
using namespace std;
void topologicalSort(vector<int>adj[],vector<int>&visited,int node,stack<int>&st){
        visited[node]=1;
         for(auto x: adj[node]){
             if(!visited[x]){
                 visited[x]=1;
                 topologicalSort(adj,visited,x,st);
             }
         }
       st.push(node);
       return ;              
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<int>adj[n+1];
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
    }
    vector<int>visited(n+1,-0);
    stack<int>st;
    
    for(int i=0;i<n;i++){
        if(!visited[i]){
            topologicalSort(adj,visited,i,st);
        }
    }
    while(!st.empty()){
         int x= st.top();
         cout<<x<<" ";
         st.pop();
    }
    return 0;
}