#include<stdio.h>
int main(){
	int a[100], n,i,d,m,p,count=0,s=0;
	printf("enter how many squares are their");
	scanf("%d",&n);
	printf("enter the value of square");
	for(i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	printf("enter birth date and month");
	scanf("%d %d",&d,&m);
	for(i=1;i<=n;i++){
		for(p=0;p<m;p++){
			s=s+a[i+p];
		}
		 if(d==s){
		 
		   count++; 
		   s=0; } 
		}
		
 printf("%d",count)	;
}
