#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j;
	vector<float>v;
	int t;
	cin>>t;
	float x;
	float tsum=0;
	float asum=0;
	float ex=0;
	for(i=0;i<t;i++){
	    cin>>x;
	    v.push_back(x);
	    tsum=tsum+x;
	}
	asum=tsum/t;
	 for(i=0;i<t;i++){
	 	if(v[i]>asum)
	 	  ex+=v[i]-asum;
	 }
	
	cout<<fixed<<setprecision(.2)<<ex;
}
