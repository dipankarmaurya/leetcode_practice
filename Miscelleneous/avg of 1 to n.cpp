#include<stdio.h>

int main()
{
	int i,n,sum;
	printf("please enter the value of n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	printf("num=%d\n",i);
		sum=sum+i;
	}
	
	int avg=(sum)/n;
	printf("sum=%d\n",sum);
	printf("avg=%d",avg);
}
