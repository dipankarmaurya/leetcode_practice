/*program to find HCF of two numer*/
#include<stdio.h>
int main(){
	int i, a,b;
	
	printf("enter first number\n");
	scanf("%d",&a);
	printf("enter second number\n");
	scanf("%d",&b);
	for(i=a<b?a:b;i>=1;i--){
	      if(a%i==0&&b%i==0)
	      	break; 	
		  }
	   printf("hcf is %d",i);      

    
}
