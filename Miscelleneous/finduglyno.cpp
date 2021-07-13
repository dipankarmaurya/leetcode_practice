#include<bits/stdc++.h>
using namespace std;
int main(){
	int ugly[100000];
	ugly[0]=1;
	int i2=0,i3=0,i5=0;
	int n;
	int next_multiple_of2=2;
	int next_multiple_of3=3;
	int next_multiple_of5=5;
	cin>>n;
	int next_ugly_no=0;
	for(int i=1;i<n;i++){
	next_ugly_no	=min(next_multiple_of2,	min(next_multiple_of3,	next_multiple_of5));
		
		ugly[i]=next_ugly_no;
		if(next_ugly_no==next_multiple_of2){
		i2=i2+1;
		next_multiple_of2=ugly[i2]*2;	
		}
		if(next_ugly_no==next_multiple_of3){
		i3=i3+1;
		next_multiple_of3=ugly[i3]*3;	
		}if(next_ugly_no==next_multiple_of5){
		i5=i5+1;
		next_multiple_of5=ugly[i5]*5;	
		}
	}
	cout<<ugly[n-1];
}
