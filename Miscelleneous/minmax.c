#include<stdio.h>
int main(){
	int a[5],i,s1=0,s2=0,s3=0,s4=0,s5=0,j,r1=0,r2=0,r3=0,r4=0,r5=0;
	printf("enter elements\n");
	for(i=1;i<=5;i++){
		scanf("%d",&a[i]);
	}
	for(i=1;i<=5;i++){
		s1 = s1+ a[i];
	    s2 = s2+ a[i];
		s3 = s3+ a[i];
		s4 = s4+ a[i];
		s5 = s5+ a[i];
} 
   r1 = s1-a[5];
   r2 = s2-a[4];
   r3 = s3-a[3];
   r4 = s4-a[2];
   r5 = s5-a[1];

   int 	s[5]={r1,r2,r3,r4,r5};
   int max =s[j],min=s[j];
   for(j=0;j<5;j++){
   	if(s[j]>max)
   	    max=s[j];
   	if(s[j]<min)
	   min=s[j];    
   	
    
}
printf("%d %d",min,max);
}
