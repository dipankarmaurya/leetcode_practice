#include<bits/stdc++.h>
using namespace std;
int findMax(vector<int>array,int idx){
	
	if(idx==array.size()-1)
	return array[array.size()-1];
	int ans =findMax(array,idx+1);
	if(ans>array[idx])
	return ans;
	else return array[idx];
	
}

int main(){
	int n;
	cin>>n;
	vector<int>v;
	while(n--){
		int x;
		cin>>x;
		v.push_back(x);
	}
	int ans =findMax(v,0);
	cout<<ans;
}
