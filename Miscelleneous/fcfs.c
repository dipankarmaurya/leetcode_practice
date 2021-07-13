#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/types.h>

#define max 30
int main()
{
int i,n,at[max] ,bt[max],tat[max],comp[max];
comp[0]=0;
float awt=0,atat=0;
printf("enter the number of processes\n");
scanf("%d",&n);
printf("enter the brust time of the procecces\n");
for(i=0;i<n;i++)
scanf("%d",&bt[i]);
printf("enter the arrival time of the procecces\n");
for(i=0;i<n;i++)
scanf("%d",&at[i]);
for(i=0;i<n;i++)
{
comp[0]=at[0]+bt[0];
if(at[i]<comp[i-1])
{
comp[i]=comp[i-1]+bt[i];
printf("complition time: %d\n",comp[i]);
}
else
{
printf("cpu is idle");
}
}
}

