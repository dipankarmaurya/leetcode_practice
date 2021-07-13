#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/wait.h>

int main()
{

int bt[10],at[10],tat[10],wt[10],ct[10];
int n,sum=0;
float totalTAT=0,totalWT=0;

printf("Enter number of processes\n");
scanf("%d",&n);
printf("Enter arrival time and burst time for each process\n\n");

for(int i=0;i<n;i++)
{
printf("Arrival time of process[%d]",i+1);
scanf("%d",&at[i]);
printf("Burst time of process[%d]",i+1);
scanf("%d",&bt[i]);
printf("\n");
}
for(i=0;i<n;i++)
{
comp[i]=comp[i-1]-at[i];
wt[i]=tat[i]-wt[i];
           
