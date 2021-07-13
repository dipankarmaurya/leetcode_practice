#include<stdio.h>
int main()
{
	int k1,x1,v1,k2,x2,v2,i,flag;
	k1=x1;
	k2=x2;
	print("enter the position and velocity of both kangaroo");
	scanf("%d %d %d %d",&x1,&v1,&x2,&v2);
	if(x2>x1&&v2>v1)
	printf("");
    else{
	
	for(i=1;i<10000;i++)
	{
		k1+=v1;
		k2+=v2;  
	  if(k1==k2){
	  	printf("");
	  	break;}
	  }}
	
	return 0;
}
