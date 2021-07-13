#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	node *link;
};
node *head =NULL;
void deletebeg(){
	node *ptr;
   ptr=head;
   head=head->link;
   free(ptr);
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
	deletebeg();
	node *temp=new node();
	temp=head;
	cout<<"head->";
	while(temp->link!=NULL){
		cout<<temp->data<<"->";
		temp=temp->link;
	}
	cout<<temp->data;
}
