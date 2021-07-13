#include<stdio.h>
int main(){
    int  n,i,j,sum=0 ,p=0;
    int a[n][n];
    printf("enter the degree of matrix\n");
    scanf("%d",&n);
   printf("enter element in matrix\n");
    for ( i= 0; i < n; i++){
    	for(j=0;j<n;j++){
		
        scanf("%d",&a[i][j]);}
    }
    for(i=0;i<n;i++){
    	for(j=0;j<n;j++){
    	
		 if(i+j==n-1){
		 
           sum = sum + a[i][j];}}
    }
    int tsum=0 ;
    tsum=sum;
    printf("%d",tsum);
    for(i=0;i<n;i++){
    	for(j=0;j<n;j++){
    	if (i==j){
		
		     p=p+a[i][j];}	

    }}
    int q=0;
    q=p;
    printf(" %d",q);
    
return 0;

}

