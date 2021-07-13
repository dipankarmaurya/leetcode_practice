#include<stdio.h>
int main()
{
	int i,j k;
	int x,y,sum=0;
	int a[11];
	int b[12]	;
	printf("enter the element in array\n");
	for(i=1;i<=11;i++)
	{
		scanf("%d",a[i]);
	}
	for(i=0;i<=11;i++){
		sum+=a[i];
		if(i==0)
		b[i]=0;
		y=i-(-i&(i));
		if(y==i)
		 b[i]=a[i];
	    else
		  b[i]=sum;	 
	}
	for(i=0;i<=11;i++)
	 printf("%d ",b[i]);
}
