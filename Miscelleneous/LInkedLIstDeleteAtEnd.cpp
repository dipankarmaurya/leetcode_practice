#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	node *link;
};
node *head =NULL;
void deleteEnd(){
	node *ptr,*prev;
	if(head->link==NULL){
		ptr=head;
		head=NULL;
		free(ptr);
	}
	else{
	ptr=head;
	while(ptr->link!=NULL){	
	prev=ptr;
	ptr=ptr->link;
   }	
   prev->link=NULL;
   free(ptr);
}
}
int main(){
	node *first =new node();
	node *second = new node();
	node *third =new node();
	head=first;
	first->data=1;
	first->link=second;
	second->data=2;
	second->link=third;
	third->data=3;
	third->link=NULL;
	deleteEnd();
	node *temp=new node();
	temp=head;
	cout<<"head->";
	while(temp->link!=NULL){
		cout<<temp->data<<"->";
		temp=temp->link;
	}
	cout<<temp->data;
}
