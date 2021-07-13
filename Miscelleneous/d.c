#include<stdio.h>
int main()
{
	int n, i,j;
	int a[n][n],b[n][n],c[n][n];
	printf("enter the size of both matrix\n");
	scanf("%d",&n);
	
	printf("enter the element in first arry\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
		printf("enter the element in second arry\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&b[i][j]);
		}
	}
	printf("sum of matrix is\n");
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			c[i][j]= a[i][j] + b[i][j];
		
				printf(" %d ",c[i][j]);
		}printf("\n");
	}

	return 0;
	}
