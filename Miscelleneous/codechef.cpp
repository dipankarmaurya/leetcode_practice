#include<bits/stdc++.h>
using namespace std;
int main(){
	
	int t;
	cin>>t;
	while(t--){
		set<int>vect;
	int count=0;
		int n;
		cin>>n;
		while(n--){
			int x,m;
			cin>>m;
			while(m--){
				cin>>x;
				vect.insert(x);
			}
			
			}
			for(auto i:vect){
				if(i<0)
				count++;
		}
	    int ans=count*(vect.size()-count);
	    cout<<ans<<endl;
	}
		
		
	}

