#include<bits/stdc++.h>
using namespace std;
bool isCycle(vector<int>adj[],vector<int>&todo,vector<int>&done,int i){
             todo[i]=1;
             done[i]=1;
             for(auto x: adj[i]){
                 if(!todo[x]){
                     if(isCycle(adj,todo,done,x)) return true;
                 }else if(done[x])
                 return true;
             }
       done[i]=0;
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
    }
    vector<int>todo(n+1,0);
    vector<int>done(n+1,0);
    
    for(int i=0;i<m;i++){
        if(!todo[i]){
            if(isCycle(adj,todo,done,i))
               {
                   cout<<"cycle present int graph";
                   return 0;
               }
        }
    }
    cout<<" no cycle found in the graph";
    return 0;
}
