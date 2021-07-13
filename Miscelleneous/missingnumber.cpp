#include<bits/stdc++.h>
using namespace std;
int main()
{
	 long n;
	 long x,sum=0;
	cin>>n;
	for(int i=0;i<n-1;i++){
	cin>>x;
	sum+=x;
}
long tsum=0;
tsum= (n*(n+1))/2;
cout<<tsum-sum;
}
