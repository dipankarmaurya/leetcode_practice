#include<bits/stdc++.h>
using namespace std;
int firstIndex(vector<int>array,int idx,int value){
	
	if(idx==array.size())
	return -1;
	int ans =firstIndex(array,idx+1,value);
	if(ans==-1){
		if(array[idx]==value)
		   return idx;
		else
		  return -1;
	}
	else
	return ans;
	
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
	int value;
	cin>>value;
	int ans =firstIndex(v,0,value);
	if(ans!=-1)
	cout<<ans;
	else cout<<"not found";
}
