#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter two number\n");
	scanf("%d %d",&a,&b);
	c=a;
	a=b;
	b=c;
	printf("swapped number is %d and %d",a,b);
}
