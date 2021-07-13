/* 
     1
    123
   12345
  1234567
 123456789
1234567891011
*/
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
		   m++;}
		 else
		   printf(" ");  
	}
	printf("\n");
	}
	}
