#include<stdio.h>
int main()
{
	int a[100],b[100],i,j,n,m,count,sum=0;;
	printf("enter number of score");
	scanf("%d",&n);
	printf("enter the score");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("enter the number of match of alice");
	scanf("%d",&m);
	printf("enter the score of alice");
	for(i=0;i<m;i++)
	scanf("%d",&b[i]);

	for(j=0;j<m;j++){
		count=1;
	for(i=0;i<n;i++){
         if(a[i]>a[i+1]&&a[i]>b[j])
			count++;
		
		}  
		if (b[0]<a[n-1])
		sum=count+1;
		else
		sum=count;  
		printf("%d\n",sum);	
     	}
}
