#include<stdio.h>
int main(){

int key[100],usb[100],b,n,m,max=0,bill,i,j,k;


	scanf("%d %d %d",&b,&k,&m);

    for(i=0;i<k;i++){
	scanf("%d",&key[i]);}
	for(j=0;j<m;j++){
		scanf("%d",&usb[j]);
}
for(i=0;i<k;i++){
	for(j=0;j<m;j++){
		bill = key[i]+usb[j];
		if(bill<=b&&max<bill)
		   max=bill;
		   
}
}
if(max>0)
printf("%d",max);
else 
printf("-1");

}
