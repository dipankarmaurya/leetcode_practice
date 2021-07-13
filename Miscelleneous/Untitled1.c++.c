#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){

ll n,d,x,p,q=0,noti=0;
float med=0;
  vector<ll>vect;
  vector<ll>b;
  cin>>n>>d;
  for(ll i=0;i<n;i++){
      cin>>x;
      vect.push_back(x);
  }
  for(ll k=0;k<(n-d);k++){
      for(ll j=k;j<d+k;j++){
             q=vect[j];
             b.push_back(q)    ;
      }
       sort(b.begin(),b.end())  ;
       for(q=0;q<d;q++)
        if(d%2!=0){
         p=(d-1)/2+k;
          med=b[p];
        }
       else{
         med = (vect[(d+k-1)/2]+vect[(d+k+1)/2])/2.0;
         }
       if(vect[d+k]>=2*med){
         noti+=1;}
       b.clear();

  }
cout<<noti;

}
