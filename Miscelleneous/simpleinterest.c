#include<stdio.h>
void main()
{
	float p,r,t, sim;
	printf("enter the principle value time and rate ");
	scanf("%f%f%f",&p,&t,&r);
	sim=(p*r*t)/100.0;
	printf("simple interest=%f",sim);
}
