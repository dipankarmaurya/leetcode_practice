#include<bits/stdc++.h>
using namespace std;
bool ispal(string s){
    int n=s.length();
    for(int i=0;i<(n/2);i++){
        if(s[i]!=s[n-i-1])
        return 0;
    }
    return 1;
}
int ispall(string s){
    int count=0;
    int n=s.length();
    for(int i=0;i<(n/2);i++){
        if(s[i]==s[n-i-1])
        count++;
    }
    return count;
}
int main(){
    int t;cin>>t;
    while(t--){
        int n;
        int k;
        string s;
        cin>>n>>k;
        cin>>s;
    bool x = ispal(s);
    if(x)
       cout<<k<<endl;
       else{
         int ans =ispall(s);
         if(ans==n/2)
         cout<<k<<endl;
         else{
             int y=n/2-ans;
             if(k==y)
             cout<<0<<endl;
             else if(k>y)
             cout<<k-y<<endl;
             else
              cout<<y-k<<endl;
         }
       }
    
    }
    
}





