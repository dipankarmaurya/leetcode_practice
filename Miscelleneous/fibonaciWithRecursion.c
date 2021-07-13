#include<stdio.h>
int main()
{
	int i,k,n;
	printf("enter the size of series\n");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	printf("%d ",fib(i));
}
fib(int n){
	if(n==1||n==2)
	return 1 ;
	else
	return (fib(n-1)+fib(n-2));
}
