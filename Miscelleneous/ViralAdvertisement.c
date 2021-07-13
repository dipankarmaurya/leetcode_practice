#include<stdio.h>
int main()
{
	int m,x=5,l=0,n,d=0;
	printf("enter number of days");
	scanf("%d",&n);
	
	do{
		
		m=x/2;
		l=l+m;
		x=3*m;
		d++;
	}while(d!=n);
	printf("%d",l);
	
}
