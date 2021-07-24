#include<bits/stdc++.h>
using namespace std;
vector<int> firstIndex(vector<int>array,int idx,int value,int osf){
	if(idx==array.size())
	{
		 vector<int>v(osf,-1);
		 return v;
	 }
	if(array[idx]==value){
		vector<int>ans =firstIndex(array,idx+1,value,osf+1);
		ans[osf]=idx;
		return ans;
	}
	
    else{
	    	vector<int>ans =firstIndex(array,idx+1,value,osf);
			return ans;
	}
   	
}

void findAllSecondMethod(vector<int>arr,int idx,int value,vector<int>&ans){
	if(idx==arr.size())
	return;
	if(arr[idx]==value)
	  ans.push_back(idx);
	  findAllSecondMethod(arr,idx+1,value,ans);
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
	vector<int>ans;
//	vector<int> ans =firstIndex(v,0,value,0);
     findAllSecondMethod(v,0,value,ans);
	for(auto it: ans)
	cout<<it<<" ";
}
