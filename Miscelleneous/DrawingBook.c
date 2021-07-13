#include<stdio.h>
int main()
{
	int n,p,min;
	printf("enter total no of page");
	scanf("%d",&n);
	printf("enter the page no brie teacher wants to open");
	scanf("%d",&p);
	min=n/2-p/2;
	if(min>p/2)
	min=p/2;
	printf("%d",min);
	  return 0;
}
