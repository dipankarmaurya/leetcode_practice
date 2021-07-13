#include<stdio.h>
int main(){
	int x,y,z,n,i,max=0;
	printf("enter number of cases\n");
	scanf("%d",&n);
	printf("enter the position\n");
	for(i=0;i<n;i++){
		scanf("%d %d %d",&x,&y,&z);
}
	
       if(y>z&&y>x&&x>z)
           printf("Cat A\n");
        if(y>z&&y>x&&z>x) 
          printf("Cat B\n");
       if(abs(x-y)==abs(y-z))
	     printf("Mouse C\n");

}
