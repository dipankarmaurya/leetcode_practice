#include<bits/stdc++.h>
using namespace std;


vector<string>predefine{".;","abc","def","ghi","jkl","mno","pqrs","tu","vwx","yz"};
        

vector<string> getKeypadvalue(string str){
    
    if(str.size()==0){
        vector<string>ans={""};
        return ans;
    }
    string sosa=predefine[str[0]-'0'];
//    cout<<sosa;
    string substring= str.substr(1);
    
    vector<string>recAns=getKeypadvalue(substring);
//    for(auto x: recAns)
//    cout<<x<<" ";
    vector<string>ans;
    for(auto x : recAns){
        for(auto y :sosa){
        	string ch;
	    	ch.append(1,y);
           ans.push_back(x+ch); 
        }
    }
    return ans;
}

int main(){
//	cout<<predefine[3];
    string s;
    cin>>s;
    vector<string>ans;
	ans= getKeypadvalue(s);
    for(auto str : ans ){
        cout<<str<<" ";
    }
   cout<<ans.size(); 
}
