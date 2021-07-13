#include<stdio.h>
int main(){
    int n,k,q,i,a[100],j,m,temp=0;
    printf("enter the value of n,k and q\n");
    scanf("%d %d %d",&n,&k,&q);
    printf("enter the value in array");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

 
 for(i=0;i<k;i++){
 	temp=a[n-1];
     for(m=n-1;m>0;m--){
     	 
         a[m]=a[(m-1)];
         
     }
    a[0]=temp; 
 }
 for(i=0;i<n;i++)
    printf("%d",a[i]);
}
