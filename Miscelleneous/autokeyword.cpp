#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int>p1,pair<int,int>p2){
	if(p1.second<p2.second){
		return true;
	}
	else if(p1.second==p2.second){
		if(p1.first>p2.first)
		   return true;
	}
	else return false;
}
int main(){
	vector<int>v;
	pair<int,int>p[]={{1,2},{2,1},{4,1}};
		pair<int,int>h;
	sort(p,p+3,cmp);
	v.push_back(8);
	auto i = v.begin();
	
	for(auto j:p)
	cout<<j.first<<" "<<j.second<<endl;
}
