#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,x;
		cin>>n>>x;
		vector<long long int>vect;
		int k;
		for(int i=0;i<n;i++){
			cin>>k;
			vect.push_back(k);
		}
		if(x%2!=0){
		vect[0]=(vect[0]^2);
		vect[1]=(vect[1]^2);}
		sort(vect.begin(),vect.end());
		for(auto i=vect.begin();i!=vect.end();i++){
			cout<<*i<<" ";
		}
		cout<<endl;
	}
}
