#include<stdio.h>
int main(){
	int a[100], n,k,i, b,an=0,sum=0,x=0;
	printf("enter number of item and the item anna leav");
	scanf("%d %d",&n,&k);
	printf("enter item cost");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("enter brian charged");
	scanf("%d",&b);
	for(i=0;i<n;i++){
		an=an+a[i];
	}
	sum=(an-a[k])/2;
	if(b>sum){
	  x=b-sum;
	  printf("%d",x);}
	else{
	
	   if(sum==b)
	   printf("Bon Apprtit");
}
	
}
