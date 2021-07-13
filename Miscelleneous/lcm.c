#include<stdio.h>
int main(){
	int i, a,b;
	
	printf("enter first number\n");
	scanf("%d",&a);
	printf("enter second number\n");
	scanf("%d",&b);
	for(i=a>b?a:b;i<=a*b;i++){
	      if(i%a==0&&i%b==0)
	      	break;
		  }
	   printf("%d",i) ;      

    
}
