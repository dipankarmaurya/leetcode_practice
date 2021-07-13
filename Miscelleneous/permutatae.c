#include<stdio.h>
#include<math.h>
int main(){
	int n,k,t,i,j,l,count=0,p=0;
	printf("enter test cases");
	scanf("%d",&t);
	printf("enter the value of n and k ");
	for(i=1;i<=t;i++){
		scanf("%d %d",&n,&k);
			for(l=1;l<=n;l++){
				if((k+l)<=n||abs(k-l)<=n)
				count++;
			}
			if(count==n){
				for(j=1;j<=n;j++){
					if(j<=n/2)
					   p=k+j;
					 else{
					 p=abs(j-k);}
					 printf("%d ",p);
				}
			}
				else
				printf("-1 ");
			
		
	}
	return 0;
}
