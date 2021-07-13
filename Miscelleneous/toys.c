#include <stdio.h>
#include<math.h>

int main()
{int t,n,i;

scanf("%d",&t);
while(t--){
  scanf("%d",&n);
  printf("%d ",n);
  int x=0;
  do{
    if(n%2==0){
      x= (sqrt(n));
           }
    else{
      x= (sqrt(n)*sqrt(n)*sqrt(n));
    }
      printf("%d ",x);
      n=x;
      
    }while(n!=1);
    printf("\n");
  }
  
  
  return 0;
}
