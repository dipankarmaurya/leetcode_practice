#include<stdio.h>
int main()
{
	int i, n,j;
	int rows = 2*n-1;
	printf("enter the value of n\n");
	scanf("%d",&n);
	for(i=1;i<=rows;i++)
	{
		  if(i<=n){
		  
	  	for(j=1;j<=i;j++) 
	  	
	  	
		  
	   
		   printf("* ");
     	}
     
	 else{
	 	
		for(j=1;j<=rows-i+1;j++)
		    printf("* "); 
	}
	
	
   	printf("\n");
	   }
	
}
