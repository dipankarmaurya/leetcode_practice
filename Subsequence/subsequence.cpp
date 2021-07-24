#include<bits/stdc++.h>
using namespace std;
  
   vector<string> findSubSequence(string str){   	     
   	    if(!str.size())
   	    {
   	    	cout<<"hi";
   	    	vector<string>v ={""};
   	    	return v;
		   }
		string ch;
		ch.append(1,str[0]);
//		cout<<ch<<" ";
	
   	    vector<string> recString =findSubSequence( str.substr(1));
   	    
   	    vector<string>v;
   	     for(auto x :recString){
   	    	v.push_back(x+ch);
		   }
   	    for(auto x :recString){
   	    	v.push_back(x);
		   }
		  
   	    
   	    return v;
   }

int main(){
	
	string str;
	cin>>str;
	
	vector<string>ans = findSubSequence(str);
	
	for(auto sequence:ans){
		cout<<sequence<<" ";
	}
}
