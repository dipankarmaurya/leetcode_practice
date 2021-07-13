#include<bits/stdc++.h>
using namespace std;
int main(){
	int i,j;
	int aa=0,bb=0;
	int a[10000];
	int b[1000];
	for(i=0;i<3;i++)
	 cin>>a[i];
	 for(i=0;i<3;i++)
	 cin>>b[i];
	 for(i=0;i<3;i++)
	 if(a[i]>b[i])
	 aa++;
	 else if(a[i]<b[i])
	 bb++;
	 else if(a[i]==b[i]){
	 
	 aa+=0;
	 bb+=0;}
	 cout<<aa<<" "<<bb;
	 
}
