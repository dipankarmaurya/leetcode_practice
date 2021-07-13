#include<stdio.h>
int main()
{
	int i,j,n,m;
	char k ;
	printf("enter a number\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
    	k ='A';	
		for(j=1;j<=2*n;j++){
		
	    	if(j>=n+1-i&&j<n+i){
	    		if(j==n+1){
	    			k=1;
	    			printf("%d",k);
	    			k++;
				}
	    		
		         printf("%c",k);
		         k++;
			   }
	 
					
	    else
		      printf(" ");
		
		}
		printf("\n");
}	}
