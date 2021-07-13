 /*      0
        101
       21012
      3210123
     432101234
    54321012345
   6543210123456
  765432101234567
 87654321012345678
9876543210123456789
*/

#include<stdio.h>
int main()
{
	int i,j,n;
	
	scanf("%d",&n);
	int k=n;
	for(i=0;i<n;i++){
		k=n-1;
		for(j=0;j<2*n-1;j++){
			if(j>=n-i-1&&j<=n-1+i){
		    	 printf("%d",k);
				 }
			else
			  printf(" ") ;  
			  j<n-1?k--:k++;
			  
		}
		printf("\n");
	}
}
