#include<bits/stdc++.h>
using namespace std;
struct Graph{
int V,E;
vector<pair<int,pair<int,int>>>edge;
 Graph(int V,int E){
 	this->V=V;
 	this->E=E;
 }
void addEdge(int u,int v, int w){
	edge.push_back({w,{u,v}});
}
int mst();
};
struct Disjointset{
    int *parent,*rank;
	int n;
	Disjointset(int n)	{
		this->n=n;
		this->parent =new int[n+1];
		this->rank=new int[n+1];
	
	for(int i=0;i<n;i++){
		rank[i]=0;
		parent[i]=i;
	}
}
int find(int u){
	if(u!=parent[u])
	  parent[u]= find(parent[u]);
	   return parent[u];
}
void merge(int x,int y){
	x=find(x);
	y=find(y);
	if(rank[x]>rank[y])
    	parent[y]=x;
	else 
	  parent[x]=y;
	if(rank[x]==rank[y])
	rank[y]++;
}
};
int Graph:: mst(){
	int mst_wt=0;
	sort(edge.begin(),edge.end());
	Disjointset ds(V);
	for(auto i = edge.begin();i!=edge.end();i++){
		int u=i->second.first;
		int v=i->second.second;
	int	set_u= ds.find(u);
	int	set_v=ds.find(v);
		if(set_u!=set_v){
			cout<< u <<" -"<< v <<" "<<i->first<<endl;
			mst_wt+=i->first;
			ds.merge(set_u,set_v);
		}
	}
	return mst_wt;
}
int main() 
{ 
    /* Let us create above shown weighted 
       and unidrected graph */
    int V = 9, E = 14; 
    Graph g(V, E); 
  
    //  making above shown graph 
    g.addEdge(0, 1, 4); 
    g.addEdge(0, 7, 8); 
    g.addEdge(1, 2, 8); 
    g.addEdge(1, 7, 11); 
    g.addEdge(2, 3, 7); 
    g.addEdge(2, 8, 2); 
    g.addEdge(2, 5, 4); 
    g.addEdge(3, 4, 9); 
    g.addEdge(3, 5, 14); 
    g.addEdge(4, 5, 10); 
    g.addEdge(5, 6, 2); 
    g.addEdge(6, 7, 1); 
    g.addEdge(6, 8, 6); 
    g.addEdge(7, 8, 7); 
  
    cout << "Edges of MST are \n"; 
    int mst_wt = g.mst(); 
  
    cout << "\nWeight of MST is " << mst_wt; 
  
    return 0; 
} 
