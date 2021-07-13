#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
    
    	int n,h,l;
    	cin>>n>>h;
    	vector<int>vect;
    	for(int i=0;i<n;i++){
    		cin>>l;
    		vect.push_back(l);
		}
		sort(vect.begin(),vect.end(),greater<int>());
		int x=h,y=h;
		for(int i=0;i<n;i++){
			if(x>0){
			if(x>y){
				cout<<x<<" ";
				x-=vect[i];
				vect[i]=-1;
			}
		}
		    if(y>0){
			 if(y>=x){
			 	cout<<y<<" ";
				y-=vect[i];
				vect[i]= -1;
			}
		}
		}
		int count=0;
		for(int i=0;i<vect.size();i++){
			//cout<<vect[i]<<" ";
			if(vect[i]==-1){
				count++;
			}
		}
	cout<<count<<endl;
	}
}

