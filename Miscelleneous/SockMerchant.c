#include<stdio.h>
int main()
{
	int a[100],j, n,i,temp=0,count=0;
	printf("enter total no of socks");
	scanf("%d",&n);
	printf("enter the color of socks");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(a[i]>=a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	
	for(i=0;i<n-1;i++){
		
			if(a[i]==a[i+1]){
				count++;
				i++;
			}
		
	}
	printf(" %d",count);
}
