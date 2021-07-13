#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		int a,b;
		cin>>a>>b;
		int min =a<b?a:b;
		int x=0;
		int i=1;
		while(x<=min){
			x=(1<<i);
			i++;
		}
		
		x=(x>>1);
		int ans =0;
		ans=((a^x)+(b^x));
		cout<<ans<<endl;
	}
}
