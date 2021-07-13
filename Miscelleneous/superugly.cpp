#include<bits/stdc++.h>
using namespace std;
int main(){
	int ugly[100000];
	int prime[4]={5,7};
	int next_multiple[4]={5,7};
	int multiple[5]={0};
	ugly[0]=1;
	int n;
	cin>>n;
	int next_ugly_no=0;
	for(int i=1;i<n;i++){
		cout<<"xxxxxx"<<endl;
		int min=500000;
	    for(int j=0;j<=1;j++){
			next_ugly_no= ugly[multiple[j]]*prime[j];
			if(min>next_ugly_no)
				min=next_ugly_no;
		}
		ugly[i]=min;
		for(int j=0;j<=1;j++){
			if(next_multiple[j]==min){
				multiple[j]+=1;
				next_multiple[j]=ugly[multiple[j]]*prime[j];
			}
		}
	}
	cout<<ugly[n-1];
}
