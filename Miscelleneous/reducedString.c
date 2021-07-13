#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,length=0;
    char s[100];
    printf("enter the string");
    scanf("%s",s);
    length=strlen(s);
    printf("%d",length);
    for(i=0;i<length;i++){
           if(s[i]==s[i+1]){
               s[i]='o';
               s[i+1]='o';
               i=i+2;
           }
           else
           i++;

    }
    
        printf("%s",s);
    
}
