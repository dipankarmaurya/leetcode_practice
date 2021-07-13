#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	node *link;
};
node *head =NULL;
void insertEnd(int data){
	node *ptr =new node();
	ptr->data=data;
	ptr->link=NULL;
	node *temp=new node();
	temp=head;
	while(temp->link!=NULL){
		temp=temp->link;
	}
	temp->link=ptr;
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
	insertEnd(4);
	node *temp=new node();
	temp=head;
	cout<<"head->";
	while(temp->link!=NULL){
		cout<<temp->data<<"->";
		temp=temp->link;
	}
	cout<<temp->data;
}
