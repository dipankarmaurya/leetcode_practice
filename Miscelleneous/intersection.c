#include<stdio.h>
int main()
{
	int i,j,n,k=0;
	int a[100];
	int b[100];
	printf("enter the number of element in set\n");
	scanf("%d",&n);
	printf("ener element in  first set\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("enter element in second set\n");
	for(i=0;i<n;i++)
	scanf("%d",&b[i]);
	int flag =0;
	printf("the intersection of set is :");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(a[i]!=b[j])
			  {
			  	flag=1;
			  	k =a[i];
			  	break;
			  }
		}
		if(flag==1)
		printf("%d ",k);
	}
}
