#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<int>a;
	int n;
	cin>>n;
	while(n--){
		int x;
		cin>>x;
a.push_back(x);
		
	}
	bool x=false;
	bool flag=false;
	for(int i=0;a.size()-1;i++)
	{
		if(a[i]>a[i+1])
		x=true;
		if(a[i]<[i+1])
         flag=true;	
	}
	if(flag&&x)
	cout<<"false";
	else
	cout<<"true";
}

