#include<stdio.h>
int main(){
	int a[100],n,i,max=0,min=0,p=0,q=0;
	printf("enter all no of match");
	scanf("%d",&n);
	printf("enter the score");
	for(i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	max=a[1],min=a[1];
	
	for(i=1;i<=n;i++){
		if(max<a[i]){
			max=a[i];
			p++;
		}}
		for(i=1;i<=n;i++){
		
		if(min>a[i]){
			min=a[i];
			q++;
		}
    	}
    	printf("%d %d",p,q);
}
