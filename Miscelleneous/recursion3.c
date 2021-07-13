#include<stdio.h>
#include<string.h>
 void Palindrome(char [], int, int);
int main()
{
	
	char s[100];
	int l=0;
	int i=0;
	scanf("%s",s);
	l =strlen(s);
	Palindrome(s,i,l);
	return 0;
}
void Palindrom(char s[],int i,int l)
{
	if(s[i]!=s[l-1-i])
	   printf("NO");
	   else{  
	   Palindrome(s,i+1,l-1) ;
	   printf("YES");}
}
