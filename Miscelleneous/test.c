#include<stdio.h>
#include<string.h>
#include<math.h>
#include<conio.h>
int main()
{
	int length=0,p=0;
	char str[10000];
	printf("enter character\n");
	scanf("%s",str);
	length = strlen(str);
	p=sqrt(length);
	printf("%d",p);
}
