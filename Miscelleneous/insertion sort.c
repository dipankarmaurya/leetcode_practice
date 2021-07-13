#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,k,n,temp=0;
	int a[100];
	printf("enter the value of n\n");
	scanf("%d",&n);
	printf("enter value in array\n");
    for(i=0;i<n;i++)
    scanf("%1d",&a[i]);
    for(i=0;i<n-1;i++){
    	for(j=i+1;j<n;j++){
    		if(a[i]>a[j]){
    			temp=a[i];
    			a[i]=a[j];
    			a[j]=temp;
		}
			for(k=0;k<n;k++){
			printf("%d",a[k]);
		}
	    printf("\n");
		}

}
return 0;
}
