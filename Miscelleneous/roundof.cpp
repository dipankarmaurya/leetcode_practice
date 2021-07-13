#include <bits/stdc++.h>
using namespace std;
float roundNum(float var)
{
    float value = (int)(var * 100 + .5);
    return (float)value / 100.0;
}

int main() {
    int t;
    cin>>t;
    while(t--){
    	
    	
	float a,b,c,v;
	cin>>a>>b>>c>>v;
	    v=(a*b*c*v);
	    cout<<v<<endl;
	   float x= 100/v;
	   cout<<x<<endl;
	    x=(int)(x*100+.5);
	    cout<<x<<endl;
	    x=(float)x/100;
	    cout<<x<<endl;
	   if( x<9.58)
	   cout<<"YES"<<endl;
	   else if(x==9.58)
	   cout<<"NO"<<endl;
	   else
	   cout<<"NO"<<endl;
	}
	return 0;
}


