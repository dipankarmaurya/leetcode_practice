#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j;
	long n;
	int a[2000000];
	long count =0;
	cin>>n;
	for(i=0;i<n;i++)
	cin>>a[i];
	for(i=1;i<n;i++){
	  if(a[i-1]>a[i]){
	     count += a[i-1]-a[i];
	     a[i]= a[i-1];
       }
   }
    cout<<count;
}
