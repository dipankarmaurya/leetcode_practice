#include<stdio.h>
int main()
{
	int a[100],i,n,j=0,k,max=0;
	printf("enter the number of hurdle and natural jumping height\n");
	scanf("%d %d",&n,&k);
	printf("enter the height of hurdle");
	for(i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	for(i=1;i<=n;i++){
		if(a[i]>max)
		  max=a[i];
	}
	if(k>max)
	   printf("0");
	else {
	
	  j= max-k;
	  printf("%d",j); } 
}
