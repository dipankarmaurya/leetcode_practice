#include<stdio.h>
int main()
{
	int a,b;
	printf("enter values of a and b\n");
	scanf("%d %d",&a,&b);
	printf("GCD of a & b is : %d",GCD(a,b));
}
GCD(int a,int b){
	if(a>b)
	{
		if(a%b==0)
		return b;
		else
		return GCD(a%b,b);
	}
	else if(b>a)
	{
		if(b%a==0)
		return a;
		else
		return GCD(a,b%a);
	}
	else
	return a;
	}

