#include<stdio.h>
struct ArrayStack{
	int top;
	int capacity;
	int *array;
};
 struct ArrayStack* createStack(int size){
 	struct ArrayStack *stack;
 	stack = malloc(sizeof(struct ArrayStack));
 	stack->top=-1;
 	stack->capacity = size;
 	stack->array = malloc(sizeof(int)*stack->capacity);
 	return stack;
 }
 isfull(struct ArrayStack* stack){
 	if(stack->top==stack->capacity-1)
 	return (1);
 	else
 	return(0);
 }
 isEmpty(struct ArrayStack* stack){
 	if(stack->top==-1)
 	return (1);
 	else
 	return(0);
 }
 void push(struct ArrayStack *stack,int item){
 	if(!isfull(stack))
 	   {
 	   	stack->top++;
 	   	stack->array[stack->top]=item;
 	   	
		}
 }
 int pop(struct ArrayStack *stack){
 	int item,choice;
 	if(!isEmpty(stack)){
 		item=stack->array[stack->top];
 		stack->top--;
 		return item;
	 }
	 else
	 return(-1);
 }
 int main(){
 	int item,choice;
 	struct ArrayStack* stack;
 	stack =createStack(5);
 	while(1){
 		printf("1-push()\n2-pop()\n3-exit\n");
 		printf("enter your choice\n");
 		scanf("%d",&choice);
 		switch(choice)
 		{
 			case 1 :
 				printf("enter a number to push\n");
 				scanf("%d",&item);
 				 push(stack,item);
 				 break;
 		    case 2 :
			     item=pop(stack)		 ;
			     printf("poped item is %d",item);
			case 3 :exit(0)      ;
		 }
	 }
 	
 }
