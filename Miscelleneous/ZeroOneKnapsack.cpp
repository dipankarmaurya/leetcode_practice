#include<bits/stdc++.h>
using namespace std;
int main()
{
	int weight[]={1,3,4,5};
	int val[]={2,4,5,6};
	int w=5;
	int n=4;
	int dp[n+1][w+1];
	for(int i=0;i<=n;i++){
		for(int j=0;j<=w;j++){
			if(i==0||j==0)
			dp[i][j]=0;
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=w;j++){
			if(weight[i-1]>j)
			dp[i][j]=dp[i-1][j];
			else
			dp[i][j]=max(val[i-1]+dp[i-1][j-weight[i-1]],dp[i-1][j]);
		}
	}
	for(int i=0;i<=n;i++){
		for(int j=0;j<=w;j++){
			cout<<dp[i][j]<<" ";
		}
		cout<<endl;
	}
}
