/*
  *
 **
***
 **
  *
  print this pattern
*/

#include<stdio.h>
int main()
{
	int i,j,n,k=0;
	printf("enter a number\n");
	scanf("%d",&n);
	for(i=1;i<=2*n-1;i++){
	 i<=n?k++:k--;	
		for(j=1;j<=n;j++){
		if(j>=n+1-k)
			    printf("*");
	    else
		      printf(" ");
		
		}
		printf("\n");
	}
}
