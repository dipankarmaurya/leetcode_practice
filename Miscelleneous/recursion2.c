#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",fact(n));
}
int fact(int n){
	if(n==1||n==0)
	return 1;
	return (n*fact(n-1));
}
