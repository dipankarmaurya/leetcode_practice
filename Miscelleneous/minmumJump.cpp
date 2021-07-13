#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	int b[t];
	for(int q=0;q<t;q++){
	    int n;
	    int a[10000];
	    cin>>n;
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    int sum=0;
	    int temp;
	    int x=0;
	    int count =0;
	    while(sum<n-1){
	        int temp=a[x];
	        sum+=temp;
	        
	           x=sum;
	        count++;
	    }
	    b[q]=count;
	}
	for(int i=0;i<t;i++)
	cout<<b[i]<<endl;
	return 0;
}
