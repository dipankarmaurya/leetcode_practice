#include<stdio.h>
#include<string.h>
int main(){
	int i,j,k,l,m;
	char s[1000];
	char p[100];
	int r[100];
	printf("enter the string\n");
	scanf("%s",s);
	printf("enter the pattern\n");
	scanf("%d",p);
	 r[0]=-1;
	i=0;j=-1;
	while(i<strlen(p)){
		while(j>=0&&s[i]!=s[j]){
			j=r[j];
		}
		i++;j++;
		r[i]=j;
	}
	
	
}
