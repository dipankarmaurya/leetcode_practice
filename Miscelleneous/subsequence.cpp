#include<bits/stdc++.h>
void checkBitSetAndPrint(int [], int);
using namespace std;
void generateSubset(int* array,int N) {
  int i,sum=0;
  
  int range = (1<<N)-1;
  
  for ( i=0;i<=range;i++) {
    checkBitSetAndPrint(array, i);
  }
  
}

void checkBitSetAndPrint(int* array, int N){
  int i=0,sum=0;
  
  while (N>0) {
    if (N&1) { // check if last bit is set
      cout<<array[i]; // print ith index only if last bit is set
    }
    N=N>>1;
    i++;
  }
  cout<<endl;
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
	generateSubset(a,n);
	}
