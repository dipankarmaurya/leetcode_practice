#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
	int sum=0,x;
	cin>>x;
	while(x){
		sum+=x%10;
		x=x/10;
	}
	cout<<sum<<endl;
  }
}
