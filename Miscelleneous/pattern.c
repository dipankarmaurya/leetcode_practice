#include<stdio.h>
int main()
{
	int i,j;
	int k,n,t;
	int s[1000];
	int a[1000];
	scanf("%d",&t);
		for(j=0;j<t;j++){
		scanf("%d %d",&n,&k);
		scanf("%d",&s[i]);
		for(i=0;i<n;i++){
			a[i]=s[(i+k)%n];
		}
	  for(i=0;i<n;i++)
		printf("%d ",a[i]);
		}
	
}
