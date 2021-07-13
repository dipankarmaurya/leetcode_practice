#include<stdio.h>
#include<stdlib.h>
#define max 10
int stack[max],top;
void push(int [],int);
int pop(int []);
void display(int []);
void display(int stack[]){
	int i;
	if(top==-1)
		printf("stack is empty\n");
    printf("%d\n",stack[top])		;
			for(i=top-1;i>0;i--)
			printf("%d\n",stack[i]);
		
	
}
void push(int stack[],int item){
	if(top==max-1){
		printf("stack is full\n");}
	 top=top+1;
	 stack[top] =item;
     
}
int pop(int stack[]){
	int ditem;
	if(top==-1)
	return (-1);

	ditem=stack[top];
		top--;
		return (ditem);
}
 int main(){
 
	
	int item=0;
	int top=-1;

	int choice=0;
	while(1){
		printf("1-push()\n2-pop()\n3-display()\n4-exit()\n");
	printf("enter your choice\n");
	scanf("%d",&choice);
	switch(choice){
		case 1:
			printf("enter number to push\n");
			scanf("%d",&item);
			push(stack,item);
			break;
		case 2:
		     item = pop(stack);
		     if(item==-1)
		       printf("stack is empty\n");
		     else
			 printf(" deleted item is = %d\n",item)  ;
			 break;
		case 3:
		      display(stack)	 ;
		      break;
		case 4:
			exit(0);
	}
	}

	}
