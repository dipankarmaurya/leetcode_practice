#include<bits/stdc++.h> 
using namespace std; 
  
#define ll long long
#define INF 1000000007 
 
ll f[100001]; 
  
ll pow(ll a, ll b, ll MOD) 
{ 
 ll x=1,y=a;  
 while(b > 0) 
 	{ 
 		if(b%2 == 1) 
 	{ 
 		x=(x*y); 
 		if(x>MOD) x%=MOD; 
 	} 
 	y = (y*y); 
 	if(y>MOD) y%=MOD;  
 	b /= 2; 
 	} 
 return x; 
} 
  
/* Modular Multiplicative Inverse 
 Using Euler's Theorem 
 a^(phi(m)) = 1 (mod m) 
 a^(-1) = a^(m-2) (mod m) */ 
ll InverseEuler(ll n, ll MOD) 
{ 
 return pow(n,MOD-2,MOD); 
} 
  
ll C(ll n, ll r, ll MOD) 
{ 
  
 return (f[n]*((InverseEuler(f[r], MOD) * InverseEuler(f[n-r], MOD)) % MOD)) % MOD; 
} 
 
int main(){ 
int n;
cin>>n;
int p;
cin>>p;
int a,b;
for(int i=0;i<p;i++){
	cin>>a>>b;
}
	f[0] = 1; 
	for(int i = 1 ; i <= n ; i++) 
		f[i] = (f[i-1]*i)%INF; 
 	cout << p*(C(n,2,INF)-1) << endl; 
} 

