#include<bits/stdc++.h>
using namespace std;
int main(){
	int bits=floor(log(7))+1;
   
	int x=((1<<bits)-1)^7;
	cout<<x;
}
