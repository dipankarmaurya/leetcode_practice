#include<stdio.h>

int main()
{
    int in[3][3],a1[3][3]={2,9,4,7,5,3,6,1,8},a2[3][3]={6,1,8,7,5,3,2,9,4},a3[3][3]={2,7,6,9,5,1,4,3,8},a4[3][3]={4,3,8,9,5,1,2,7,6},a5[3][3]={8,1,6,3,5,7,4,9,2},a6[3][3]={4,9,2,3,5,7,8,1,6}
    ,a7[3][3]={8,3,4,1,5,9,6,7,2},a8[3][3]={6,7,2,1,5,9,8,3,4},i,j,cost,min=1000;
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
        scanf("%d",&in[i][j]);
    cost=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cost+=abs(a1[i][j]-in[i][j]);
        }
    }
    if(cost<min)
        min=cost;
    cost=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cost+=abs(a2[i][j]-in[i][j]);
        }
    }
    if(cost<min)
        min=cost;
    cost=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cost+=abs(a3[i][j]-in[i][j]);
        }
    }
    if(cost<min)
        min=cost;
    cost=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cost+=abs(a4[i][j]-in[i][j]);
        }
    }
    if(cost<min)
        min=cost;
    cost=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cost+=abs(a5[i][j]-in[i][j]);
        }
    }
    if(cost<min)
        min=cost;
    cost=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cost+=abs(a6[i][j]-in[i][j]);
        }
    }
    if(cost<min)
        min=cost;
    cost=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cost+=abs(a7[i][j]-in[i][j]);
        }
    }
    if(cost<min)
        min=cost;
    cost=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cost+=abs(a8[i][j]-in[i][j]);
        }
    }
    if(cost<min)
        min=cost;
    cost=0;
    printf("%d\n",min);
    return 0;
}
