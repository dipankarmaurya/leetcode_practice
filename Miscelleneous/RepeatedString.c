#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	long n,len,i,j,k,count=0;
	char c='a';
    char *a=(char*)malloc(sizeof(char)*(int)pow(10,100));
   char *b=(char*)malloc(sizeof(char)*(int)pow(10,100));
	printf("enter the string");
	scanf("%s",a);
	printf("enetr the value of n");
	scanf("%ld",&n);
	
	for(i=0;i<n;i++){
		b[i]=a[i];}
			for(i=0;i<n;i++){
		     strcat(a,b);
	}
	
	for(i=0;i<n;i++){
		
		if(a[i]==c)
	    	count++;
	}
	printf("%ld",count);
}
