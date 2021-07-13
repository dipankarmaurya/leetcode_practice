#include<stdio.h>
int main()
{
    int n,arr[100],i,j,low,s=0,count=0,a=0,max=0;
    printf("enter the size of array\n");
    scanf("%d",&n);
    printf("enter the element in array\n ");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    low=arr[0];
    max=0;
    for(i=0;i<n;i++){
       if(low>arr[i]&&low>=1)
          low =arr[i];
       if(max<arr[i])
	     max=arr[i]   ;
} 


for(j=0;j<max;j++){
	count=0;
for(i=0;i<n;i++){
	if(j==0) {
		if(arr[i]==0)
		 count=count+0;
		 else
		 count++;
	}
	 
	else
	  {
	  	arr[i]=arr[i]-low;
	  	if(arr[i]>0)
	  	 count++;
	  }
}
if(count>0)
printf("%d\n",count);
}
}











