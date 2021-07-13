#include<bits/stdc++.h>
using namespace std;
void insert(set<int>&s,int a[],int size){
	for(int i=0;i<size;i++)
	s.emplace(a[i]);
}
int main(){
	set<int>s;
	int a[3]={1,5,9};
	s.insert(a[0]);
	int b[6]={0,2,3,6,7,8};
	insert(s,a,3);
	insert(s,b,6);
	for(auto it:s)
	cout<<it<<" ";
}
