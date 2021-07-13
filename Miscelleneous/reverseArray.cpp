#include <bits/stdc++.h>
using namespace std;
int main() {
	int t,n,k,x;
	vector<int>v;
	cin>>t;
	while(t--){
	    cin>>n;
	    for(int i=0;i<n;i++){
	        cin>>x;
	       v.push_back(x);
	    }
	    cin>>k;
	    sort(v.begin(),v.end());
	    cout<<v[k-1];
	    cout<<endl;
	    v.clear();
	}
	return 0;
}
