#include<bits/stdc++.h>
using namespace std;
int main(){
	int i,j,k;
	int n,m;
	char s [10][10];
	string a;
	string b;
	cin>>n;
	cin>>m;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
		 cin>>s[i][j]	;
		}
	}
	for(i=0;i<n;i++){
		int count=0;
		for(j=0;j<m;j++){
			if(s[i][j]=='*')
			   cout<<"*";
			else if(s[i][j]=='.'){
			    	if(s[i-1][j-1]=='*')
				       count +=1;
				   	if(s[i-1][j]=='*')
				       count +=1;
				   	if(s[i-1][j+1]=='*')
				      count +=1;
				   	if(s[i][j-1]=='*')
				      count +=1;
				   	if(s[i][j+1]=='*')
				      count +=1;
				   	if(s[i+1][j-1]=='*')
				      count +=1;
				   	if(s[i+1][j]=='*')
				      count +=1;
				   	if(s[i+1][j+1]=='*')
				      count +=1;
			cout<<count;
			count=0;
			}
				
	}
	cout<<endl;
}
}
