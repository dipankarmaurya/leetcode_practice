#include<stdio.h>
int main(){
    int n,a[100],j,i,k,m,temp=0;
    printf("enter the value of n,k and q\n");
    scanf("%d",&n);
    printf("enter the value in array");
    for(i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    for(j=1;j<=n;j++){
     	m=0;	
    	for(i=1;i<=n;i++){
    		if(j==a[i]){
    			m=i;
		    	temp=0;
    			for(k=1;k<=n;k++){
    				if(m==a[k])
    				temp=k;
				}
			}	  
		}
		printf("%d\n",temp);
	}
}
