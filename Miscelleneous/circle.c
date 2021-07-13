#include<stdio.h>
int main()
{
	float r, pi=3.14, area, ci;
	printf("enter the radious  of circle \n");
	scanf("%f",&r);
	area=(pi*r*r);
		printf("area of circle = %f\n",area);
	ci=2*pi*r;
	printf("cirumference of circle=%f\n",ci);
	return 0;
}
