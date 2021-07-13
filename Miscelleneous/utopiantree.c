#include<stdio.h>
int main(){
	int a[100], t,n,i,j,u=0,s=0;
	printf("enter number of test case");
	scanf("%d",&t);
	printf("enter the no of year");
	for(j=0;j<t;j++){
		scanf("%d",&n);
	}
	
	for(i=0;i<n;i++){
		if(i%2==0)
	    	u=u+1;
		else 
	    	u=2*u;
		}
		printf(" %d",u);
	
}
