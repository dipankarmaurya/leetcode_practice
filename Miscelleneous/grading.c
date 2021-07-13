#include<stdio.h>
int main(){
	int a[100],i,j,m,n,s=0;
	printf("enter number of student");
	scanf("%d",&m);
	printf("enter the garade of student");
	for(i=1;i<=m;i++){
		scanf("%d",&a[i]);
	}
	for(i=1;i<=m;i++){
		s=0;
		for(j=1;j<=5;j++){
			s=a[i]+j;
			if(s%5==0&&j<3){
			    printf(" %d\n",s);
			    	}
			 if(a[i]<38||s%5==0&&j>=3){
			 	printf(" %d\n",a[i]);
			 	break;
			 }
			   
		}
	}
	
}
