#include<stdio.h>
#include<conio.h>
void main()
{
 int arr[10],num,i,n,found=0,pos=-1;
 clrscr();
 printf("Enter the number of elements in the array: ");
 scanf("%d",&n);

 printf("\nEnter the elements: \n");
 for(i=0;i<n;i++)
 {
  printf("arr[%d] = ",i);
  scanf("%d",&arr[i]);
 }

 printf("\nEnter the number that has to be searched: ");
 scanf("%d",&num);

 for(i=0;i<n;i++)
 {
  if(arr[i]==num)
  {
   found=1;
   pos=i;
   printf("\n %d is found in the array at position = %d",num,i);
   break;
  }
 }
 if(found==0)
 printf("\n %d does not exist in the array\n",num);
 getch();
}
