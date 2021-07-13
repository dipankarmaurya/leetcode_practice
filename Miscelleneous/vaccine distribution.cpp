#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		int ans=0;
		int risk=0;
		int safe=0;
		int n,x;
		cin>>n>>x;
		int arr[500000];
		for(int i=0;i<n;i++){
			 cin>>arr[i];
		}
	    for(int i=0;i<n;i++)
	    {
	    	if(arr[i]>=80||arr[i]<=9)
	    	   risk++;
		}
		safe=n-risk;
		int days=0;
		if(safe%x!=0)
		   days+=safe/x+1;
		else
		days+=safe/x   ;
		if(risk%x!=0)
		   days+=risk/x+1;
		else
		   days+=risk/x;   
	    cout<<days<<endl;
	}
}
