#include<bits/stdc++.h>

using namespace std;

int main(){
	//cout<<(1<<3);
	int n;
	      cin>>n;
    	while(n>1){ 
			 cout<<n<<" ";  
		    if(n&1){
		 	  n = 3 * n + 1;
		    }
		    
	    	else{
			  n = n / 2;
			}
					
		}
		
	cout<<"1";
	
}
