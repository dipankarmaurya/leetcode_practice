#include<stdio.h>
#include<string.h>
int main(){
    long i,j,k,n,max=0;
    char s[100000];
    char c='X';
    scanf("%ld",&n);
    for(i=0;i<n;i++){
        max=0;
        scanf("%s",s);
    
        for(j=1;j<n-1;j++){
            if(max<s[j])
              max=s[j];}
        for(k=0;k<n;k++){
            if(max==s[k]&&max>s[0]&&max>s[n-1]){
              s[k]=c;
              break;}
              }      
        printf("%s\n",s);    
        }
      return 0;
    }

