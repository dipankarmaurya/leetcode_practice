#include<stdio.h>
#include<string.h>
int main(){
	int i,j,n,k,x=0,temp=0;
	char s[100];
	printf("enter the value of test case\n");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",s);
		x = strlen(s);
		for(j=x;j>1;j--){
			for(k=j-1;k>0;k--){
				if(s[j]>s[k]){
				temp=s[j];
				s[j]=s[k];
				s[k]=temp;
			
             }
         }
           	
			  
           	}
	printf("%s",s)  ;	
}
}
