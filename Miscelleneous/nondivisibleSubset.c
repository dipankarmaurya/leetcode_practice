#include<stdio.h>
int main()
{
	int i,j,cond,n,k,count=0,a[100],b[100];
	printf("enter value of n and k");
	scanf("%d %d",&n,&k);
	printf("enter the value i8n array ");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++){
		b[a[i]%k]=b[a[i]%k]+1;
		
	}
	cond=(k%2==0)?k/2:(k/2)+1;
	for(j=0;j<cond;j++){
		if(b[0]!=0&&j==0)
		count++;
		else
		count+=(b[j]>b[k-j])?b[j]:b[k-j];
       
	}
	if(k%2==0)
	count+=1;
	printf(" %d",count);
}
