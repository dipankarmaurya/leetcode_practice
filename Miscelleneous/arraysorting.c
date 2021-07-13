#include<stdio.h>

int main()
{
	int arr[10],temp,i,j,n;
	printf("enter the number of element in the array\n");
	scanf("%d",&n);
	
	printf("enter the element in array\n");
	    for(i=0;i<n;i++)
	     scanf("%d",&arr[i]);
	    
    
	for(i=0;i<n;i++)
	{
    	if(arr[i]<arr[i+1])
	    {
		 ;
   		 arr[i]=arr[j];
	    }

    }
   	printf("element of array in decending order are=%d",arr[j]);
			  
	for(i=0;i<n;i++)
	  
	return 0;
}
