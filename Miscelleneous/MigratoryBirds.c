#include<stdio.h>
int main()
{
	int a[100],n,i,a1=0,a2=0,a3=0,a4=0,a5=0;
	printf("enter the number of birds sighted");
	scanf("%d",&n);
	for(i=0;i<n;i++){
	 scanf("%d",&a[i]);
    }
    int c1=1,c2=2,c3=3,c4=4,c5=5;
    for(i=0;i<n;i++){
    	if(c1==a[i])
    	   a1++;
    	if(c2==a[i])   
    	   a2++;
    	if(c3==a[i])   
    	  a3++;
    	if(c4==a[i])  
    	  a4++;
    	if(c5==a[i])
		    a5++;
	}
    int  	c[]= {a1,a2,a3,a4,a5};
	int max=0;
	for(i=0;i<5;i++){
		if(c[i]>max)
		    max=c[i];
	}
	if(max==a1){
	 printf("%d",c1);
	  exit(0);}
	  if(max==a2){
	  printf("%d",c2);
	  exit(0);}
	  if(max==a3){
	  printf("%d",c3);
	  exit(0);}
	  if(max==a4){
	  printf("%d",c4);
	  exit(0);}
	  if(max==a5)
	  printf("%d",c5);
	
	return 0;
}
