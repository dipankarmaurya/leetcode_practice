/*
ABCDEFGHGFEDCBA
ABCDEFG GFEDCBA
ABCDEF   FEDCBA
ABCDE     EDCBA
ABCD       DCBA
ABC         CBA
AB           BA
A             A
print this pattern*/
#include<stdio.h>
int main()
{
	int i,j,n;
	char k;
	printf("enter a number\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		k='A';
		for(j=1;j<=2*n-1;j++)
		{
			if(j<=n-i+1 || j>=n+i-1)
			{
					printf("%c",k);
			     j<n?k++:k--;
				
			}
			else{
				printf(" ");
				if(j==n) /*Logic*/
				k--;
			
              	}
			
		}
		printf("\n");
	}
}
