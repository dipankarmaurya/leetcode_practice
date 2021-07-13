#include<stdio.h>
int main()
{
	
long i,n ,a[n];
    long int sum =0 ;
    printf("enter the size of array");
    scanf("%d",&n);
    printf("enter the element in array");
     for ( i = 0; i < n; i++)
	  {
         scanf("%ld", &a[i]);
         sum=sum+a[i];
       }
    
    printf("%ld",sum);
    return 0;


}



