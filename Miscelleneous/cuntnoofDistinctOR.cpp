#include <bits/stdc++.h>
using namespace std;
 int subarrayBitwiseORs(vector<int>& A) {
        unordered_set<int> s;
        for(int i=0;i<A.size();i++){
            int j=i-1;
            int x=0,y=A[i];
            s.insert(y);
            while(j>=0 and x!=y){
                x|=A[j];
               // cout<<x<" ";
                y|=A[j];
                //cout<<y<<" ";
                s.insert(y);
                j--;
            }

        }
    for(auto x:s)
    cout<<x<<" ";
    cout<<endl;
        return s.size();
    }
main(){
   vector<int> v = {0,6,1,12,14,3};
   cout<<(12|1)<<endl;
  cout << subarrayBitwiseORs(v);
}
