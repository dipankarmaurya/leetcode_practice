/*program to print ARMSTRONG number between given two number*/
#include<stdio.h>
int main()
{
	int i,x,a,b,c,sum=0;
	printf("enter smaller number\n");
	scanf("%d",&a);
	printf("enter larger  number\n");
	scanf("%d",&b);
	for(i=a+1;i<b-1;i++){
		x=i;
		while(x!=0){
		
		c=x%10;
		sum=sum+c*c*c;
		x=x/10;
        }
	if(sum==i)
	   printf("%d",i);
}
	
}
