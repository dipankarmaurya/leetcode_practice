#include<stdio.h>
void linear_search();
void_display();
 struct node
 {
 	int info;
 	struct node *next;
 };
 struct node *start= NULL;
void main()
 {
  int choice;
      char ch;
   	  do
   	   {
   	  	  printf("enter your choice\n");
   	  	  scanf("%d",&ch);
   	  	  printf("1 : linear search\n2 : display\n");
   	  	  switch(choice)
   	  	   {
   	  		case 1 : linear_search();
				 	break;
		    case 2: display();
		    default : printf("your choice is wrong\n");
		   }
		   scanf("%c",&ch);
	   } while(1);
	   {
	   	printf("enter choice\n");
	   	scanf("%d",&ch);
	   }
	}
	
     

void linear_search()
{
    int *a;
	int n;
	int item;	
    int k;
    struct node *temp=(struct node*)malloc(sizeof(struct node));
     for(k=0;k=n;k++)
     { 
        if(a[k]==item)
        return k;   
     }
     return -1; 
}
void_display()
{ 
	struct node *ptr1=start;
	while(ptr1!=NULL)
	{
		printf("%d",ptr1->info);
		ptr1=ptr1->next;
	}
}



