#include<stdio.h>
int main()
{
    int n,i,j,temp=0,q=0;
    int arr[10000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=1;i<n;i++){
        j=i-1;
        temp=arr[i];
        while(temp<arr[j]&&j>=0){
          arr[j+1]=arr[j];
          q++;
          j=j-1;
        }
        arr[j+1]=temp;;

    }
    printf("%d",q);
}

