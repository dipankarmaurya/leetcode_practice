#include<stdio.h>
#include<string.h>
int main(){
	int i,j,k,n,length,max=0;
	char s[100];
	char c='x';
	printf("enter the number");;
	scanf("%d",&n);
	printf("enter  string");
	for(i=0;i<n;i++){
		scanf("%s",s);
		length = strlen(s);
		for(j=1;j<=length-1;j++){
			if(!max||max<s[j])
			  max=s[j];}
		for(k=0;k<n;k++){
	        if(max==s[k])
	          s[k]=c;}
			  
			
		}
		for(i=0;i<n;i++)
		printf("%s",s);
	}

