#include<bits/stdc++.h>
using namespace std;


void targetSum(vector<int>&v,int i,int tar,string osf){
	if(i==v.size()){
		if(tar==0)
		cout<<osf<<"."<<endl;
		return;
	
	}

	targetSum(v,i+1,tar-v[i],osf+to_string(v[i])+",");
	targetSum(v,i+1,tar,osf);
	
}



int main(){
    
    int n;
    cin>>n;
    vector<int>v;
    while(n--){
        int x;
        cin>>x;
        v.push_back(x);
        
    }
    int tar;
    cin>>tar;
    targetSum(v,0,tar,"  ");
    
}
