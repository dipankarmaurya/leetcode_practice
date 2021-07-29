#include<bits/stdc++.h>
using namespace std;
void permutation(int cs,int ts,map<char,int>&mp,string asf){
	if(cs>ts){
		cout<<asf<<endl;
	return ;	
	}
      for(auto pair : mp){
//      	cout<<pair.first;
      	if(mp[pair.first]>0){
      		mp[pair.first]-=1;
      		string st;
      		st.append(1,pair.first);
      		permutation(cs+1,ts,mp,asf+st);
      		mp[pair.first]+=1;
      		cout<<endl;
		  }
	  }
	
}

int main(){
	
	string s;
	cin>>s;
	map<char,int>mp;
	for(auto ch: s){
		mp[ch]+=1;
	}
	permutation(1,s.size(),mp,"");
}
