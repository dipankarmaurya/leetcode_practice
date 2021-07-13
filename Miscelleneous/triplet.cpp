#include<stdio.h>
int main()
{ int n;
	int alice[n],bob[n] ,al=0,bb=0,x,y,i,j;
	printf("enter the size of arrays");
	scanf("%d",&n);
	printf("enter the element in first arryay");
	for(i=0;i<n;i++){
		scanf("%d",& bob[y]);
	}
	printf("enter the element in second arryay");
	for(j=0;j<n;j++){
		scanf("%d", &alice[x]);
	}
	for(i=0;i<n;i++){
		if(alice[x]>bob[y]){
		
		    al++;}
		 else{
		 
		     bb++;}
	}
	printf("al = %d\n",al);
	printf("bb = %d",bb);
}
