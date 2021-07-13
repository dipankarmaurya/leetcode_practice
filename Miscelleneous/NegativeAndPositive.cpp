#include <bits/stdc++.h>
using namespace std;

int main() {
	set<int>s;
	int t;
	cin>>t;
	while(t--){
	    int n,m,x,y;cin>>n>>m;
	    for(int i=0;i<n;i++){
	        cin>>x;
	        s.insert(x);
	    }
	    for(int i=0;i<m;i++){
	        cin>>y;
	        s.insert(y);
	}
	cout<<s.size()<<endl;;
	s.clear();
	}
	return 0;
}
