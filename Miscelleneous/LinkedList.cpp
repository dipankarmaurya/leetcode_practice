#include<bits/stdc++.h>
using namespace std;
struct node{
	int val;
	node* next;
};
node* head=nullptr,*tail=nullptr;
node* add(int data){
	node *temp=new node();
	temp->val=data;
	temp->next=nullptr;
	if(head==nullptr){
		head=temp;
		tail=temp;
	}
	else{
	tail->next=temp;
	tail=temp;}
}
void display(node* head){
	node* temp=head;
	while(temp){
		cout<<temp->val<<" ";
		temp=temp->next;
	}
}
int main(){
	node* temp1=head, *temp=head;
	add(1);
	add(2);
	add(3);
	add(4);

display(head);
}
