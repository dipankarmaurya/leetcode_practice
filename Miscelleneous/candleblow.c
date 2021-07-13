#include<stdio.h>
int main(){
	int a[100],i,n,high, max,count=0,t=0;
	printf("enter the age");
	scanf("%d",&n);
	printf("enter the candle for each year\n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++){
		if(max<a[i])
		  max=a[i];
	}
	high=max;
	for(i=0;i<n;i++){
		if(high==a[i])
		count++;
	}
	t=n-count;
	printf("%d",t);
	
	}
