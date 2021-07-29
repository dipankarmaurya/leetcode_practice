#include<bits/stdc++.h>
using namespace std;
void permutations(vector<int>&box,int titems,int ci,int isf,string asf){
	if(asf.size()==box.size()){
		
		    		cout<<asf<<endl;
					return;
			}
		
	
	for(int i=0;i<box.size();i++){
		if(box[i]==0){
		    box[i]=ci;
	        permutations(box,titems,ci+1,isf+1,asf+to_string(box[i]));
//	    	permutations(box,titems,ci,isf,asf+"0");
	    	box[i]=0;
		}
		
	}
}


int main(){
    int n;
    int titems;
    cin>>n>>titems;
    
    vector<int>boxes(n,0);
    
    permutations(boxes,titems,1,0,"");
}
