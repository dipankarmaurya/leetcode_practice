/*
*******
*     *
* *** *
* * * *
* *** *
*     *
*******
print this pattern */
#include<stdio.h>
int main()
{
	int i,j,n,k;
	printf("enter a number\n");
	scanf("%d",&n);
	
	for(i=1;i<=2*n-1;i++){
	for(j=1;j<=2*n-1;j++){
	 if(i==1||i==2*n-1||j==1||j==2*n-1||(i>=n-1&&i<=n+1&&j>=n-1&&j<=n+1)&&(i==n-1||i==n+1||j==n-1||j==n+1))    
	        printf("*");

	     
	     else
	        printf(" ");
	
	}
	printf("\n");
	}
}

