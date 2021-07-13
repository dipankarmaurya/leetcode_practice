#include<bits/stdc++.h>
using namespace std;
long long int cnt=0;

   int countWays(int* arr,int x,int n){
    if(n==0)
    return 1;
    if(x==0)
    return 0;
    if(arr[x-1]>n)
      return  countWays(arr,x-1,n);
    return countWays(arr,x,n-arr[x-1])+countWays(arr,x-1,n);
}

// Complete this function
 int count(long long int n)
{
    int arr[]={3,5,10};
    return countWays(arr,3,n);
}

int main(){
	long long int n;
	cin>>n;
	long long int x=count( n);
	cout<<x;
}
