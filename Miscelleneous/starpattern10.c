/*
        1
       121
      12321
     1234321
    123454321
   12345654321
  1234567654321
 123456787654321
12345678987654321
print this pattern*/
#include<stdio.h>
int main(){
	
	int i,j,n,m;
	printf("enter a number\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		m=1;
		for(j=1;j<=2*n-1;j++){
		 if(j>=n+1-i&&j<=n+i-1){
		 
		      printf("%d",m);
		  j<n?m++:m--;   /*LOGIC*/
		  }
		 else
		   printf(" ");  
	}
	printf("\n");
	}
	}
