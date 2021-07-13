#include<stdio.h>
#include<stdlib.h>
#define max 10
void enQueue(int [],int);
int deQue(int []);
int isFull(int []);
int isEmpty(int []);
int que[max],front=-1,rear=-1;
int isFull(int que[]){
	if((rear+1)%max==front)
	return 1;
	return 0;
}
 int isEmpty(int que[]){
 	if(rear==front==-1)
 	return 1;
 	return 0;
 }
 void enQueue(int que[],int data){
 	if(isFull(que)){
	 printf("que is full");
 		
	 }
	 else{
	 
	rear=(rear+1)%max;
 		que[rear]=data;
 		if(front==-1)
 		  front =rear;
}
 }
 int deQueue(int que[] ){
 	int data;
 	if(!isEmpty(que)){
 		data=que[front];
 		if(front==rear)
 		front =rear=-1;
 	 front=(front+1)%max;
 		return data;
	 }
	 return -1;
 }
 int main(){
 	int choice=0;
 	int data=0;
 	while(1){
 		printf("1-enque\n2-deque\n3-exit\n");
 		printf("enter your choice\n");
 		scanf("%d",&choice);
 		switch(choice){
 			case 1:
 				printf("enter number to insert in que\n");
 				scanf("%d",&data);
 				enQueue(que,data);
 				break;
 			case 2:
			   data= deQueue(que)	;
			   printf("deleted data is %d\n",data);
			   break;
			case 3:
			exit(0)    ;
		 }
	 }
 }
