#include<stdio.h>
int main()
{
	int a[100],i,n;
	float rat1=0,rat2=0,rat3=0,rat,pos=0,neg=0,zero=0;
	printf("enter the number");
	scanf("%d",&n);
	printf("enter elelment");
	for(i=0;i<n;i++){
	  scanf("%d",&a[i]);
	  }
	  for(i=0;i<n;i++){
	  	if(a[i]>0){
	  	   pos++;}
	    if(a[i]<0){
	  	   	neg++;
			 }
		if(a[i]==0){
			zero++;}
		}
		rat1 = pos/n;
		rat2= neg/n;
		rat3 = zero/n;	 
	  printf("%f\n%f\n%f",rat1,rat2,rat3);
	  return 0;	   
	  }

