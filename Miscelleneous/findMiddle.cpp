#include<bits/stdc++.h>
using namespace std;
int main(){
	int a=15,b=10,c=5;
	int h =a>b?(a>c?a:c):(b>c?b:c);
	int l =a<b?(a<c?a:c):(b<c?b:c);
	int ans =(a+b+c)-(h+l);
	cout<<ans;
}
