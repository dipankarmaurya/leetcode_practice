#include<stdio.h>
int main()
{
	int n,i;
	printf("enter the nuber to check that it prime or not");
	scanf("%d",&n);
	for(i=2;i<n;i++){
		if(n%i==0)
		break;}
		if(i==n)
		   printf("number is prime");
		else
		   printf("number is not prime");   
		
	
	return 0;
}
