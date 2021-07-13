#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
    while(t--){
	long x,y;
	cin>>x>>y;
	long ans=0;
	if(x>=y){
	  if(x%2==0)
    	ans= x*x-y+1;
	  else
	     ans= (x-1)*(x-1)+y;
    }
   else{
   	 if(y%2!=0)
	  ans=y*y-x+1;
   	 else
	  ans=(y-1)*(y-1)+x; 
   }
   cout<<ans<<endl;
  }
}
