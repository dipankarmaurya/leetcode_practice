#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,i,m=0;
	int l,u;
	
	cin>>l>>u;
	
 int count=0; 
	for(i=l;i<=u;i++){
	   count =0;
		n=i;
    	while(n>1){ 
    	
	     	count++;
			   
		    if(n&1){
		 	  n = 3 * n + 1;
		    }
		    
	    	else{
			  n = n / 2;
			}
					
		}
		if(m<count)
		m=count;
	}
	cout<<l<<" "<<u8<<" "<<m+1;
	
}
