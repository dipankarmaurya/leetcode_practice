#include<bits/stdc++.h>
using namespace std;
int knapsack(vector<int>weight,vector<int>value,int bag_size,int item_size){
	int dp[item_size+1][bag_size+1];
	for(int i=0;i<=item_size;i++){
		for(int j=0;j<=bag_size;j++){
			if(i==0||j==0)
			dp[i][j]=0;
		}
	}
	for(int i=1;i<=item_size;i++){
		for(int j=1;j<=bag_size;j++){
			if(weight[i-1]>j)
			dp[i][j]=dp[i-1][j];
			else
			dp[i][j]=max(value[i-1]+dp[i-1][j-weight[i-1]],dp[i-1][j]);
		}
	}
	return dp[item_size][bag_size];
}
int main(){
	vector<int>wt;
	vector<int>val;
	int bag_size;
	int item_size;
	cin>>item_size;
	while(item_size--){
		int item;int price;
		cin>>item>>price;
		wt.push_back(item);
		val.push_back(price);
	}
	cin>>bag_size;
	int ans =knapsack(wt,val,bag_size,wt.size());
	cout<<ans;
}
