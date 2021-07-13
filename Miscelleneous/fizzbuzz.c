#include<stdio.h>

int main()
{
    int i, n;
    printf("enter the number\n");
     scanf("%d", n);
    for(i=1;i<=n;i++)
    {
      if(i%3==0&&i%5==0){
          printf("FizzBuzz\n");
      }

      else if(i%3==0&&i%5!=0){
        printf("Fizz\n");
      }

      else if(i%5==0&&i%3!=0){
         printf("Buzz\n");
      }

       else if(i%5!=0&&i%3!=0){
         printf("%d",i);
       }


    }
    return 0;
}
