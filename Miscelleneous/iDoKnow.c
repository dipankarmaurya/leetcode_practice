#include<stdio.h>
int main()
{
	int a[100],j, i,n,max=0,out=0;
	char str[1000];
	char b[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	printf("enter the height of each letter");
	for(i=0;i<3;i++){
		scanf("%d\n",&a[i]);
	}
	fgets(str,n+1,stdin);
	for(i=0;i<26;i++){
		for(j=0;j<n;j++){
			if(b[i]==str[j])
			     str[j]=a[i];
		}
		}
		max=0;
	for(i=0;i<n;i++){
	printf("%d",str[i]);
		if(max<str[i])
		 max=str[i];	
	}
	out=max*n;
	printf("%d",out);
}
