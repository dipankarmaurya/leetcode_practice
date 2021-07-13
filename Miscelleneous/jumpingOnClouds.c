#include<stdio.h>
int main()
{
	int a[100],n,k,j,i,jump=0,e=100,sum=0;
	printf("enter the number of clouds and jump value");
	scanf("%d %d",&n,&k);
	printf("numbering the cloud");
	for(i=0;i<n;i++){
	
	scanf("%d",&a[i]);}
	for(i=0;i<n;i++){
	while(i!=0){
	    	i= (i+k)%n ;
		    e = e-a[i+k]*2-1	;
		  }
	
	}
	printf("%d",e);
}
