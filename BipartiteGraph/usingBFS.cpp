
     // BFS method to check if a given graph is bipartite or not

#include<bits/stdc++.h>
using namespace std;


bool isbipartite(vector<int>adj[],vector<int>&colored,int node){
         colored[node]=1;
         queue<int>que;
         que.push(node);
         while(!que.empty()){
             int x= que.front();
             que.pop();
             for(auto i: adj[x]){
                 if(!colored[i]){
                     colored[i]=colored[x]==1?2:1;
                     que.push(i);
                 }
                 else if(colored[i]==colored[x])
                 return false;
             }

         }
         return true;
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
        if(!colored[i]){
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
