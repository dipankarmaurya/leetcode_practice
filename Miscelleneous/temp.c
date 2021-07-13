#include<stdio.h>
#include<math.h>
int main(){
    int a[100],n,i,j,u=1,s=0;
    printf("enter number of test cases\n");
    scanf("%d",&n);
    printf("enter years\n");
    for(i=0;i<n;i++)
      scanf("%d",&a[i]);
    for(i=0;i<n;i++){
        for(j=0;j<=a[i];j++){
            if(j%2!=0){
              u=u*2;}
             else{
             u=u+1;} 
        }
        printf("%d\n",s);
    }  
}
