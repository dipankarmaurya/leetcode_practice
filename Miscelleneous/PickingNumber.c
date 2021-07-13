#include<stdio.h>
int main(){
    int a[1000],b[1000], i,j,n,temp=0,sum=0,count=0,max=0;
    printf("enter the size of array");
    scanf("%d",&n);
    printf("enter element in array");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++){
    for(j=i+1;j<n;j++){
          if(a[i]<a[j]){
	
                temp=a[i];
                a[i]=a[j];
                 a[j]=temp;}

}}

for(i=0;i<n;i++){
	count=1;
	for(j=i+1;j<n;j++){
		sum=abs(a[i]-a[j]);
		if(sum<=1){
		count++;
		if(max<count)
		   max=count;}
		
	}
	
}
printf(" %d",max);
	  
}

