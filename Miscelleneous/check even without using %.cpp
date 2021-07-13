#include<stdio.h>
int main()
{
	int a;
	printf("enter a number\n");
	scanf(" %d",&a);
	if(a&1)
	  printf("odd");
	else
	  printf("even");  
	  return 0;
	
}
