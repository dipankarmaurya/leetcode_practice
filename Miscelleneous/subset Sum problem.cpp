#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[5]={2,3,5,4,40};
	int n=5;
	int sum=27;
	bool dp[6][28];
	for(int i=0;i<=n;i++){
		for(int j=0;j<=sum;j++){
			if(i==0)
			dp[i][j]=false;
			if(j==0)
			dp[i][j]=true;
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=sum;j++){
			if(arr[i-1]>j)
			dp[i][j]=dp[i-1][j];
			else
			dp[i][j]=(dp[i-1][j-arr[i-1]]||dp[i-1][j]);
		}
	}
	cout<<dp[n][sum];
}
