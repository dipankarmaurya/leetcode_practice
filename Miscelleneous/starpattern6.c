 /*  
   * * * *
    * * *
	 * *
	  *	    
 print this pattern */
#include<stdio.h>
int main(){
	
	int i,j,n;
	printf("enter a number\n");
	scanf("%d",&n);
	for(i=1;i<n;i++){
		for(j=1;j<n;j++){
		 if(j>=i)
		   printf(" *");
		 else
		   printf(" ");  
	}
	printf("\n");
	}
	
}
