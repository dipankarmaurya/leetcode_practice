#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t-->0){
		int x;
		cin>>x;
		int count=0;
		int y=x;
		while(y){
			y&=y-1;
			count++;
		}
		y=((1<<(count+1))-1);
		vector<int>v;
		for(int i=0;i<=y;i++)
		v.push_back(i);
		int maxm=0;
		for(int i=y;i>0;i--){
			if(v[i]!=-1&&v[v[i]^x]!=-1){
			maxm=max(maxm,v[i]*(v[i]^x));
			v[i]=-1;
			v[v[i]^x]=-1;
		   }
		   else
	    	break;
		}
		cout<<maxm<<endl;
	}
}
