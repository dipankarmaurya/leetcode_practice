#include<stdio.h>
int main()
{
	int n,a,rev=0;
	printf("enter a value to be reverse\n");
	scanf("%d",&n);
	while(n>=1)
	{
	
	a=n%10;
	rev=(rev*10)+a;
	n=n/10;
	printf("reverse =%d",rev);

   }
	return 0;
}
