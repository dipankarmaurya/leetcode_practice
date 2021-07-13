#include<stdio.h>
int main(){
    int n,i,s,x=0,p=0,count=0;
    printf("enter number\n");
    scanf("%d",&n);
    printf("enter element\n");
    for(i=0;i<n;i++){
        scanf("%d",&s);
        x=s;
        count=0;
        do{
            p=x%10;
            if(p==0)
            count=count+0;
            else{
			
			if(s%p==0){
                count++;}}
             x=x/10;
        }while(x!=0);
      printf("%d",count);
    }
}

