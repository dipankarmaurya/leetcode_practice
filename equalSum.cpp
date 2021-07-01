//if array has two subset with equal sum
#include<bits/stdc++.h>
using namespace std;
bool subsetSum(vector<int>array,int sum,int array_size){
	bool dp[array_size+1][sum+1];
	for(int i=0;i<=array_size;i++){
		for(int j=0;j<=sum;j++){
			if(i==0)
			dp[i][j]=false;
			if(j==0)
			dp[i][j]=true;
		}
	}
	for(int i=1;i<=array_size;i++){
		for(int j=1;j<=sum;j++){
			if(array[i-1]>j)
			dp[i][j]=dp[i-1][j];
			else
			dp[i][j]=(dp[i-1][j-array[i-1]]||dp[i-1][j]);
		}
	}
	return dp[array_size][sum];
}
int main(){
	vector<int>array;
	int sum;
	int array_size;
	cin>>array_size;
	while(array_size--){
	int x;
	cin>>x;
	array.push_back(x);
	sum+=x;
	}
	if(sum%2!=0)
	cout<<false;
	
	else{
	sum=sum/2;
	 bool ans =subsetSum(array,sum,array.size());
	if(ans)
	cout<<true;
	else
	cout<<false;
	}
}
