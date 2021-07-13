#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		ll n,x;
		cin>>n;
		vector<int>v;
		while(n--){
			cin>>x;
			v.push_back(x);
		}
		int max=*max_element(v.begin(),v.end());
		int min=*min_element(v.begin(),v.end());
		x=0;
		for(int i=0;i<v.size();i++){
			if(v[i]>min&&v[i]<max)
			x=v[i];
		}
		if(x==0)
		x=v[0];
		int ans=abs(min-x)+abs(x-max)+abs(max-min);
		cout<<ans<<endl;
	}
}
