#include<bits/stdc++.h>
using namespace std;
class node{
	public:
		int data;
		node* left;
		node*right;
		node(int d){
			data=d;
			left=nullptr;
			right=nullptr;
		}
};
node * buildTreePreorder(){
	int data;
	cin>>data;
	if(data==-1)
	return nullptr;
	node* root=new node(data);
	 root->left= buildTreePreorder();
	 root->right=buildTreePreorder();
	 return root; 
}


void inorder(node * root){
	if(root==nullptr){
     cout<<-1<<" ";
	return;
}
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}
void preorder(node * root){
	if(root==nullptr){
	cout<<-1<<" ";
	return;
}
	cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);
}
void postorder(node * root){
	if(root==nullptr){
	cout<<-1<<" ";
	return;
	}
	postorder(root->left);
	postorder(root->right);
	cout<<root->data<<" ";
}
int main(){
	node * root=buildTreePreorder();
	cout<<"Inorder Traversal"<<" ";
	inorder(root);
	cout<<endl;
	cout<<"Preorder Traversal"<<" ";
	preorder(root);
	cout<<endl;
	cout<<"postorder Traversal"<<" ";
	postorder(root);
	cout<<endl;
}
