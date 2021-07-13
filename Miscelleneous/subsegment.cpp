#include<bits/stdc++.h>
int checkBitSetAndPrint(int [], int);
using namespace std;
int generateSubset(int* array,int N) {
  int i,sum=0;
  
  int range = (1<<N)-1;
  
  for ( i=0;i<=range;i++) {
    sum+=checkBitSetAndPrint(array, i);
  }
  return sum;
}

int checkBitSetAndPrint(int* array, int N){
  int i=0,sum=0;
  
  while (N>0) {
    if (N&1) { // check if last bit is set
      sum+=array[i]; // print ith index only if last bit is set
    }
    N=N>>1;
    i++;
  }
  return sum;
}

int main(){
	int i,sum=0;
	int a[100];
	int x;
	int n;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	sum+=generateSubset(a,n);
	cout<<sum;}
