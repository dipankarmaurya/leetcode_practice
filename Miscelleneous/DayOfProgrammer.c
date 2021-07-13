#include<stdio.h>
int main()
{
	int y,d,m,leap,jan=31,feb=28,mar=31,apr=30,may=31,jun=30,jul=31,aug=31,sep=9,sum=0;
	 
	printf("enter year");
	scanf("%d",&y);
	if(y<1918){
		if(y%4==0)
		feb=29;}

    else if(y>1918){
		if(y%400==0 || (y%100!=0&&y%4==0))
		feb=29;
	}
    else if(y==1918){
    	feb=15;
	}
	else
	feb=28;
	sum= 256 -(jan+feb+mar+apr+may+jun+jul+aug);
	printf("%d.%d.%d",sum,sep,y);
	 
}
