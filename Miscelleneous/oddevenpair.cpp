#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		long long int ans=0;
		long long int a,b;
		long long int aeven,aodd,beven,bodd;
		cin>>a>>b;
		aeven=a/2;
		aodd=a/2;
		beven=b/2;
		bodd=b/2;
		if(a&1)
	     aodd+=1;
		if(b&1)
		 bodd+=1;
	 ans=aeven*beven+aodd*bodd;
	 cout<<ans<<endl;	
	}
}


