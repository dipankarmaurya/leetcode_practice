#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j;
	string s;
	cin>>s;
	long count=0,ans=0;
	for(i=0;i<s.size()-1;i++){
		if(s[i]==s[i+1])
		 count++;
		 else
		 count =0;
		 if(count>ans)
		   ans=count;
	}
	cout<<ans+1;
}
