#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,i,q;
	cin>>t;
	 int a[10000];
	 int n;
	for(q =0;q<t;q++){
	    cin>>n;
	    for( i=0;i<n;i++){
	        cin>>a[i];
	    }
	    int curSum=0,prevSum=-999,ans=0,ans1=0;
	    for(i=0;i<n;i++){
	        curSum+=a[i];
	        prevSum=max(a[i],curSum);
	        if(curSum<0)
	        curSum=0;
	        ans =max(ans,prevSum);
	        
	    }
	    cout<<ans<<"\n";

	}

}


