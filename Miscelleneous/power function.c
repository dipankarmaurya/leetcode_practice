#include<stdio.h>
#include<string.h>
#include<math.h>
int power(int);
 int power(int x)
{    if(x==0)
        return -1;
    if(x%2==0)
    {
        if(x==2)
        return 2;
        else 
         power(x/2);
    }
else
    return -1;
}
int main()
{
     char s[100];
    int x,i,j,n=0,p=0,t,l;
      scanf("%d",&t);
     for(l=0;l<t;l++){
    scanf("%s",s);
    n=0;
    for(i=0;i<strlen(s);i++){
        x=0;
        for(j=i;j<strlen(s);j++)
        {
            x=x*10+((int)s[j]-(int)'0');
            p=power(x);
            if(p==2)
            n++;
        }
    }
    printf("%d\n",n);
     }
}
