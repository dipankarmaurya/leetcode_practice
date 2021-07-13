#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
cin>>t;
int q=t;
while(q--){
    int n;
    cin>>n;
    if(t==1)
      {
        cout<<"1";
         return 0;
        }
  
    vector<int>v;
    int x;
    for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    int count=0,ans=0;
    for(int i=0;i<n-1;i++){
        if(i>0 &&v[i]==v[i-1]+1)
           count++;
        else
        count=1;
        ans=max(count,ans);
    }
      
      cout<<ans;
      cout<<endl;
    
}
	return 0;
}
