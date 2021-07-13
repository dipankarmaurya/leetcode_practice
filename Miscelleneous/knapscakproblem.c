#include<stdio.h>
void swap(float,float);
void swap(float a,float b){
float temp=a;
	  a=b;
      b=temp;
}
int main(){
	int i,j;
	float wt[1000];
	float pf[1000];
	float rt[1000];
	int n;
	float x;
	printf("enter the number of object");
	scanf("%d",&n);
	printf("enter the weight and profit\n");
	for(i=0;i<n;i++)
	scanf("%f %f",&wt[i],&pf[i]);
	printf("enter the capacity of bag\n");
	scanf("%d",&x);
	
	for(i=0;i<n;i++)
	rt[i]=pf[i]/wt[i];
	
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(rt[i]<rt[j]){
			   int temp =rt[i];
			   rt[i]=rt[j];
			   rt[j]=temp;
			   
			    temp =wt[i];
			   wt[i]=rt[j];
			   wt[j]=temp;
			   
			    temp =pf[i];
			   pf[i]=pf[j];
			   pf[j]=temp;
		
		   }
		}
    }
		for(i=0;i<n;i++)
		printf("%.2f %.2f %.2f\n",wt[i],pf[i],rt[i]);
	}
