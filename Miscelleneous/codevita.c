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
		for(i=0;i<n;i++){
		scanf("%d",&s[i]);}
		for(i=0;i<n;i++){
			a[i]=s[(i+k)%n];
		printf("%d",a[i])	;
		}
		}
	return 0;
}
