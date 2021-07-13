#include<stdio.h>
int main()
{
	int i,j,k,l,x=0,sum=0,m=0,count=0;
	printf("enter the value of i j and k");
	scanf("%d %d %d",&i,&j,&k);
	for(l=i;l<=j;l++){
		x=l;
		sum=0;
		do{
			m=x%10;
			sum=sum*10+m;
			x=x/10;
		}while(x!=0);
		if(abs(l-sum)%k==0)
		   count++;
	}
	printf("%d",count);
}
