#include<stdio.h>
#include<string.h>

int main(){
	char U;
	int n,i,c1=0,v1=0;
	char str[200];
	scanf("%d\n",&n);
	fgets(str,n+1,stdin);
	
	for(i=0;i<n;i++){
		if(str[i]=='U')
           c1++;
		else
		   c1--;
		 if(str[i]=='U'&&c1==0)
		  v1=v1+1 ;}  		
	printf("%d",v1);
	return 0;
	
}
