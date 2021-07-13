#include<stdio.h>
#include<string.h>
#include<conio.h>
int main(){
	int a[100],n,i,j,max=0,length=0;
	char b[100]={0};
	char c[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    
	printf("enter word");
	scanf("%s",b);
	gets(b);
	printf("enter the array size");
	scanf("%d",&n);
	printf("enter the height of element");
	scanf("%d",&a[i]);
	for(j=0;j<strlen(b);j++)
	for(i=0;i<n;i++){
		if(b[j]==c[i]){
			b[j]=a[i];
			if(max<a[i])
		    	max=a[i];
		}
		}
	}
	printf("%d", max *strlen(b));
	
}
