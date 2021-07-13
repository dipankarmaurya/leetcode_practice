#include<stdio.h>
#include<string.h>
void isPalindrome(char [],int,int);
int main()
{
	char s;
	int l=0,i=0;
	scanf("%s",s);
	l=strlen(s);
	isPalindrome(s,i,l);
}
void isPalindrom(char s[],int i,int l)
{
	if(s[i]!=s[l-1-i])
	   printf("NO");
	  isPalindrome(s,i+1,l-1) ;
	   printf("YES");
}
