#include<stdio.h>
int main()
{
	int i,j ,n,k,p=0,q=0;
	printf("enter a number");
	scanf("%d",&n);
	printf("enter values in matrix\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&k);
		}
	}
for(i=0;i<n;i++){
	for(j=0;j<n;j++){
		if(j==i){
		   p=p+k;
		   }
		if(j==n+1-i){
			q=q+k;
			
		}
	}
}

printf("%d",q)	;
}
