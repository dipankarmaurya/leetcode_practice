#include<stdio.h>
int main(){
	int a[100], i,j,n,k,count=0, sum=0;
	printf("enter the array size and the value of k");
	scanf("%d %d",&n,&k);
	printf("enter the value in element");
	for(i=1;i<=n;i++){
	
	scanf("%d",&a[i]);}
	for(i=1;i<=n;i++){
		for(j=i+1;j<=n-i;j++){
			sum=0;
			sum=a[i]+a[j];
			if(k==sum){
			 count++;
			 }
		}
	}
	printf("%d",&count);
	return 0;
}
