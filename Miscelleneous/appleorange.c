#include<stdio.h>	
int main()
{
	int ap[100],bo[100],p[100],q[100], s,e,a,b,m,n,i,j,count1=0,count2=0 ;
	printf("enter sams housestart point and end point\n");
	scanf("%d %d",&s,&e);
	printf("enter the location of apple tree and orange tree\n");
	scanf("%d %d",&a,&b);
	printf("enter amount of apple and orange");
	scanf("%d %d",&m,&n);
	printf("enter falling distance for apple");
	for(i=1;i<=m;i++){
		scanf("%d",&ap[i]);
	}
	printf("enter falling distance for orange");
	for(j=1;j<=n;j++){
		scanf("%d",&bo[j]);
	}
	for(i=1;i<=m;i++){
		p[i] = a+ap[i];
	}
	for(i=1;i<=m;i++){
		printf(" %d",p[i]);
	}
	for(j=1;j<=n;j++){
		q[j] = b+bo[j];
	}
	for(j=1;j<=n;j++){
		printf(" %d",q[j]);
		}
		for(i=1;i<=m;i++){
			if(p[i]>=s&&p[i]<=e)
			    count1++;
				}
				for(j=1;j<=n;j++){
					if(q[j]>=s&&q[j]<=e)
					count2++;
				}
				printf("%d\n%d",count1,count2);
}
