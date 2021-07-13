#include<stdio.h>
int main()
{
	int i,j,n;
	
	scanf("%d",&n);
	
	int k=1;	
	for(i=0;i<2*n-1;i++){
		for(j=0;j<k;j++){
			 if(j==0)
		    	printf("1");
		    	else
		    	printf("0");
		     
		}
	i<n-1?k++:k--;		
		printf("\n");
	}
}
