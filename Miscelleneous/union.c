#include<stdio.h>
int main()
{
    int i,j,k,n,m,temp1=0,temp2=0, x=0,p=0,q=0;
    int a[1000];
    int b[1000];
    printf("enter the size of first arr\n");
    scanf("%d",&n);
    printf("enter element in first array\n");
    for(i=0;i<n;i++){
     scanf("%d",&a[i]);}
      printf("enter the size of second arr\n");
    scanf("%d",&m);
    printf("enter element in second array\n");
     for(i=0;i<m;i++){
     scanf("%d",&b[i]);}

    for(i=0;i<n-1;i++){
      for(j=i+1;j<n;j++){
        if(a[i]>a[j]){
        temp1=a[i];
        a[i]=a[j];
        a[j]=temp1;}
      }
    }
    
    for(i=0;i<m-1;i++){
    for(j=i+1;j<m;j++){
        if(b[i]>b[j]){
        temp2=b[i];
        b[i]=b[j];
        b[j]=temp2;}
    }
}
for(i=0;i<m;i++){
    p=0;
    q=0;
    x=0;
    x=b[i];
    for(j=0;j<n;j++){
        if(x==a[j])
            p++;
    }
    
    for(k=0;k<m;k++){
        if(x==b[k])
        q++;
    }
    if(p<q)
      printf("%1d ",&b[i]);
}
return 0;
}
