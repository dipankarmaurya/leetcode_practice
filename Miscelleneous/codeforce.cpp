#include<bits/stdc++.h>
using namespace std;

vector<int> subset(int* arr,int h,int n,int y){
	int dp[n+1][h+1];
	for(int i=0;i<=n;i++){
		for(int j=0;j<=h;j++){
			if(i==0)
			dp[i][j]=false;
			if(j==0)
			dp[i][j]=true;
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=h;j++){
			if(arr[i-1]>j)
			dp[i][j]=dp[i-1][j];
			if(arr[i-1]<=j)
			dp[i][j]=(dp[i-1][j-arr[i-1]]||dp[i-1][j]);
		}
	}
	vector<int>b;
	for(int i=0;i<=h;i++)
	{
		if(dp[n][i])
		b.push_back(i);
		//cout<<b[i]<<" ";
	}
	return b;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,x,y;
		cin>>n>>x>>y;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
	
	   int 	flag=0,sum=0;;
		for(int i=0;i<n;i++){
			sum+=a[i];
		/*	if(sum>=x&&sum<=y)
			   {
			   	flag=1;
			   	break;
			   }*/
		}
	/*	if(flag==1)
		cout<<0<<endl;
		else if(sum<x)
		cout<<-1<<endl;
		else{*/
			vector<int>arr;
			arr=subset(a,sum,n,y);
			flag=0;
			for(int i=0;i< arr.size()+2;i++){
				cout<<arr[i]<<" ";
			    if(arr[i]>=x&&arr[i]<=y)
			     {
			     	flag=1;
			     	break;
					}   
			}
			if(flag==1){
			cout<<" work is not done";
			}
			else
			cout<<-1<<endl;
	//	}
	}
}
