#include<bits/stdc++.h>
using namespace std;
void topoSort(vector<pair<int,int>>adj[],vector<int>&visited,stack<int>&st,int i,int n){
         
        visited[i]=1;
        for(auto pair : adj[i]){
            int node = pair.first;
             int weight =pair.second;
             if(!visited[node]){
                 topoSort(adj,visited,st,node,n);
             }
        }
    st.push(i);

}
int main(){
    int n,m;
    cin>>n>>m;

    vector<pair<int,int>>adj[n];
    for(int i=0;i<m;i++){
        int u,v,w;
        cin>>u>>v>>w;
        adj[u].push_back({v,w});    
    }
      stack<int>st;
      vector<int>visited(n,0);
      for(int i=0;i<n;i++){
          if(!visited[i])
      topoSort(adj,visited,st,i,n);
      }
    vector<int>distance(n,INT_MAX);
     distance[0]=0;
    while(!st.empty()){
        int val= st.top();
        st.pop();
        for(auto pair : adj[val]){
            int node =pair.first;
            int weight=pair.second;
            if(distance[node]>distance[val]+weight)
                distance[node]=distance[val]+weight;
        }
    }
    for(auto x: distance)
    cout<<x<<"  ";
}