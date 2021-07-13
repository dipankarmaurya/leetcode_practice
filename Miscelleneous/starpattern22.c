/*

10
101
1010
10101
101010
1010101
print this pattern */
#include<stdio.h>
int main()
{
	int i,j,n,k;
	printf("enter a number\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
	for(j=1;j<=n+1;j++){
	 if(j<=i+1){
	 	if(j&1)
	 	    printf("1");
	 	else
		    printf("0");    
	 }
	     
	     else
	        printf(" ");
	
	}
	printf("\n");
	}
}

