#include<bits/stdc++.h>
int findParent(int node,int parent[]){
       if(node==parent[node])
       return node;
     return parent[node]=findParent(parent[node],parent);  
}
void Union(int u,int v, int parent[],int rank[]){
    u=  findParent(u,parent);
    v=findParent(v,parent);
    if(rank[u]>rank[v])
       parent[v]=u;
    else if(rank[v]>rank[u])
      parent[u]=v;
    else{
       parent[u]=v;
       rank[v]++;
    }   
}
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int parent[n+1];
    int rank[n+1];
    for(int i=0;i<n;i++)
     parent[i]=i,rank[i]=0;

     while(m--){
         int u,v;
         cin>>u>>v;

     } 
     

}