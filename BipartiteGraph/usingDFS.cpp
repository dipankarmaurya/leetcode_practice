#include<bits/stdc++.h>
using namespace std;
bool isbipartite(vector<int>adj[],vector<int>&colored,int node){
       if(colored[node]==-1)colored[node]=1;
       for(auto x  : adj[node]){
           if(colored[x]==-1){
               colored[x]=1-colored[node];
               if(!isbipartite(adj,colored,x))
                     return false;
           }
           else if(colored[x]==colored[node])
           return false;
       }
    return true ;    
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
    vector<int>colored(n+1,-1);
    int flag=0;
    for(int i=1;i<=n;i++){
        if(!colored[i]==-1){
           if( isbipartite(adj,colored,i))
               flag=1;
            if(flag)
            break;   
        }
    }
    if(flag)
    cout<<"Given graph is bipartite ";
    else
    cout<<"Not a bipartite graph";
}