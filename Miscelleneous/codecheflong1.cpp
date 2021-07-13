#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string s;
    cin>>n;
    while(n-->0){
        cin>>s;
        int len=s.length();
        int count =0;
        for(int i=0;i<len;){
            if(s[i]=='1'){
                count++;
                while(i<len && s[i]=='1'){
                i++;
                }
                
            }
                else{
                    i++;
                }
        }
        cout<<count<<endl;
    }
}
