/*program to print prime number between two given number */
#include<stdio.h>
int main(){
	int i,j, a,b;
	
	printf("enter smaller number number\n");
	scanf("%d",&a);
	printf("enter larger nuber number\n");
	scanf("%d",&b);
	for(i =a+1; i <= b-1 ; i++){
		for(j = 2;j<i;j++)
		    if(i%j==0)
		      break;
		if(i == j)
		   printf(" %d ",i);  
     	
		
		
	      
		  }
	       

    
}
