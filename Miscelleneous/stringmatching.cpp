#include<bits/stdc++.h>
 using namespace std;
 int main()
 {
 	map<int,string>mp;
 	string s1;
 	string s2;
 	cin>>s1;
 	cin>>s2;
 	do
 	 { 
	   int i=0; 
	   while(i<s1.size())
 	   {
 		 auto it = s1.find(s2,i);
 		  if(it!=-1)	    
 		    mp[it]=s2;
 		 else
		    break; 
 		 i++;
        }
    }while(next_permutation(s2.begin(),s2.end()));
	
	 for(auto it:mp)
	    cout<<"substring "<<it.second<<" present at index "<<it.first<<"\n";
 }
