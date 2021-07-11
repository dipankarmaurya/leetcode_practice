#include<bits/stdc++.h>
using namespace std;
void shortestDistance(vector<int>adj[],int source,vector<int>&distance){
    queue<int>que;
    que.push(source);
    distance[source]=0;
    while(!que.empty()){
        int node =que.front();
        que.pop();
        for(auto x:adj[node]){
            if(distance[x]>distance[node]+1){
                distance[x]=distance[node]+1;
                que.push(x);
            }
        }
    }
}
int main(){
    int n,m;
    cin>>n>>m;

    vector<int>adj[n];
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<int>distance(n,INT_MAX);
    shortestDistance(adj,0,distance);
    for(auto x: distance)
    cout<<x<<" ";
}