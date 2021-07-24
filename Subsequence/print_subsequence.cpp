#include<bits/stdc++.h>
using namespace std;
vector<string>v;
void print_subsequence(string input,string output){
	if(input.size()==0)
	{
		v.push_back(output);
		return ;
	}
	print_subsequence(input.substr(1),output+input[0]);
	print_subsequence(input.substr(1),output);
	
	
}
int main(){
	
	string str;
	cin>>str;
	print_subsequence(str,"");
	for(auto st: v)
	cout<<st<<" ";
	cout<<v.size();
}
