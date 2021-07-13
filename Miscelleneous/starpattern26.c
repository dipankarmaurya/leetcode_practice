/*
1
2*3
4*5*6
7*8*9*10
11*12*13*14*15
16*17*18*19*20*21
22*23*24*25*26*27*28
print this pattern */
#include<stdio.h>
int main()
{
	int i,j,n,m,k=1;
	printf("enter a number\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
	    
	for(j=1;j<=2*n-1;j++){
		 if(j<=2*i-1){
		 	if(j&1){
			 
		 	     printf("%d",k);
				  k++;
				  }
		 	else
			  printf("*")     ;
		 } 
	        
	else
	printf(" ");
	}
	printf("\n");
	}
}

