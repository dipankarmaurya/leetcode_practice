# include <stdio.h>
# include <stdbool.h>
# include <math.h>
bool chkkaprekar(int n)
{
    if (n == 1)
    return true;
    int sqr_n = n * n;
    int ctr_digits = 0;
    while (sqr_n)
    {
        ctr_digits++;
        sqr_n /= 10;
    }
    sqr_n = n*n; 
    int r_digits;
    for ( r_digits=1; r_digits<ctr_digits; r_digits++)
    {
         int eq_parts = pow(10, r_digits);

         if (eq_parts == n)
            continue;
         int sum = sqr_n/eq_parts + sqr_n % eq_parts;
         if (sum == n)
           return true;
    }
    return false;
}
int main()
{
	int p,q,i;
printf("enter the value of p and q");
scanf("%d %d",&p,&q);
  
  for(i=p;i<q;i++)
		  if (chkkaprekar(i)==true)
		  {
		   printf(" %d",i);}
}
