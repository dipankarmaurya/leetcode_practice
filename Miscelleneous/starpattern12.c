
#include<stdio.h>
int main()
{
	int i,j,n,k=0,m;
	m=(n+1)/2;
	
	printf("enter a number\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	   i<=m?k++:k--;
		for(j=1;j<=n;j++)
		{
			if(j>=m+1-k && j<=m-1+k)
				printf("*");
			else
				printf(" ");
		    	
		}
		printf("\n");
	}
}
