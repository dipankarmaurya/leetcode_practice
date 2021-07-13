#include<stdio.h>
int main()
{
	int x;
	printf("enter the value of x\n");
	scanf("%d",&x);
	if((x%2!=0)||(x%2==0&&(x>=2&&x<=5)))
     	printf("weird");
   	if((x%2==0)&&(x>=6))
    	printf("not weird"); 	
}
