#include<stdio.h>
int main(){
	int i,j,n,k,temp,max=0;
	int a[100];
	int b[100];
	printf("enter the number of element in array ");
	scanf("%d",&n);
	printf("enter element in array ");
	for(i=0;i<n;i++){
		scanf("%d",a[i]);
	}
	max=0;
	for(i=0;i<n;i++){
		if(a[i]>max)
		max=a[i];
	}
	for(i=0;i<max;i++)
	b[i]=0;
	for(i=0;i<n;i++){
		temp=a[i];
		b[temp]++;
		}
		for(i=0;i<max;i++);
		printf("%d",b[i]);
	
}
