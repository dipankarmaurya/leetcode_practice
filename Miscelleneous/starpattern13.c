/*
*
**
***
****
***
**
*
 print this pattern */
#include<stdio.h>
int main()
{
	int i,j,n,m,k=0;
	printf("enter a number\n");
	scanf("%d",&n);
	m=(n+1)/2;
	for(i=1;i<=2*n-1;i++){
	
	i<=n?k++:k--;
		
		for(j=1;j<=n;j++){
			if(j<=k)
			 printf("*");
	    	else
		      printf(" ");
		
		}
		printf("\n");
	}
}
