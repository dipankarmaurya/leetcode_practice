#include<bits/stdc++.h>
using namespace std;
    	   
int main()
{
    int i,j;
    int n,x;
    int a[100];
    int b[100];
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		b[i]=a[i];
	}
	int flag=0;
	for(i=0;i<n-1;i++)
	{
		if((a[i]&a[i+1])>=1)
		   flag=1;
		else
		   flag=0;
	cout<<flag<<" "   ;	
	}
	
	}
