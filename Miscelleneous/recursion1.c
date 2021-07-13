#include<stdio.h>
#include<string.h>
void rev(char [],int);
int main(){
 char s[1000];
 int l=0;
 scanf("%s",s);
  l= strlen(s);
 rev(s,l);
 return 0;
}
void rev(char s[],int l) {
	if(l>=0){
	printf("%s",s[l-1]);
	rev(s,l-1);}
}
