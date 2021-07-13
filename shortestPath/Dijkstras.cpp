#include<bits/stdc++.h>
using namespace std;
void dijkstra(vector<pair<int,int>>adj[],vector<int>&distance,int sourceVertex){
    priority_queue <pair<int,int>, vector<pair<int,int> >, greater<pair<int,int> > >pq;
    distance[sourceVertex]=0;
    pq.push(make_pair(distance[sourceVertex],sourceVertex));
    while(!pq.empty()){
        int dist = pq.top().first;
        int prev =pq.top().second;
        pq.pop();
        for(auto it: adj[prev] ){
            auto pair =it;
            int node= pair.first;
            int node_distance=pair.second;
            if(distance[node]>distance[prev]+node_distance){
                distance[node]=distance[prev]+node_distance ;    
                pq.push(make_pair(distance[node],node));
            }
        }
    }


}

int main(){
    int vertex,edges;
    cin>>vertex>>edges;

    vector<pair<int,int>>adj[vertex+1];
    for(int i=0;i<edges;i++){
        int node1, node2,dist;
        cin>>node1>>node2>>dist;
        adj[node1].push_back({node2,dist});
        adj[node2].push_back({node1,dist});
    }
    vector<int>distance(vertex+1,INT_MAX);
    int sourceVertex;
    cin>>sourceVertex;
    dijkstra(adj,distance,sourceVertex);

    for(auto dist : distance )
    cout<<dist<<" ";
}