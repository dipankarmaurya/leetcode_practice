#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void updatedarray(int [],int,int);
int abssum(int [],int);
void updatedarray(int *arr,int q,int x)
{
    int *a,i;
    a = malloc(sizeof(int));
    for(i=0;i<x;i++){
        a[i]=arr[i]+q;
    }
    
} 
int abssum(int *a,int y){
    int sum=0,i;
   for( i=0;i<y;i++){
      sum+=abs(a[i]) ;
   }
   return sum;

}
int main(){
	int i,j,*a,*b;
	int a_l,b_l;
	a = malloc(sizeof(int));
	b= malloc(sizeof(int));
	printf("enter lengthof array a");
	scanf("%d",&a_l);
	printf("enter element in array\n");
	for(i=0;i<a_l;i++){
		scanf("%d",&a[i]);
		
	}
		printf("enter lengthof array b");
	scanf("%d",&b_l);
	printf("enter element in array\n");
	for(i=0;i<b_l;i++){
		scanf("%d",&b[i]);
		
	}
	int p=0;
	for(i=0;i<b_l;i++){
          p=b[i];
       updatedarray(a,p,a_l);
       for(j=0;j<a_l;j++)
         printf("%d ",a[i]);
       b[i] =abssum(a,a_l);
         
      }
	}

