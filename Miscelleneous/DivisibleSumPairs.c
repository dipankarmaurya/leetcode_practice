#include<stdio.h>
int main(){
	int a[100], i,j,n,k,count=0, sum=0;
	printf("enter the array size and the value of k");
	scanf("%d %d",&n,&k);
	printf("enter the value in element");
	for(i=1;i<=n;i++){
	
	scanf("%d",&a[i]);}
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if(i<j){
		     	  if((a[i]+a[j])%k==0)
			        count++;
			      
			 }
			 
		}
		
	}
	printf("%d",count);
	return 0;
}
