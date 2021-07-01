#include<bits/stdc++.h>
using namespace std;

void ans(int num ,int x,string &s){
	while(num!=0){
	string s1=to_string(num%x);
	s+=s1;
		num=(num/x);
	}
	return;
}
int main(){
	int num, base;
	cin>>num>>base;
	string s="";
	ans(num,base,s);
	reverse(s.begin(),s.end());
	int count=0,max=0;
	for(int i=0;i<s.size();i++){
		if(s[i]=='0')
		count++;
		else
		  count=0;
		if(count>max)
		   max=count;
	}
	if(max==0)
	cout<<-1;
	else
	cout<<max;
}
