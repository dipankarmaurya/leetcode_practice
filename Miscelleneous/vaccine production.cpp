#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int count =1;
	int max=1;
	for(int i=0;i<s.length()-1;i++)
	{
		if(s[i]==s[i+1])
		 count++;
		 if(max<count)
		 max=count;
		 else
		 count =1;
		 
	}
	cout<<max;
}
