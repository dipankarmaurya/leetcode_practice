#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
			int a,x;
			cin>>a>>x;
			if(a<=2)
			cout<<"1"<<endl;
			else{
				int count=0;
				int nums=a-2;
				count =nums/x;
				if(nums%x!=0)
				count++;
				cout<<count+1<<endl;
			}
	}
	return 0;
}
