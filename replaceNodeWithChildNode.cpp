#include<bits/stdc++.h>
using namespace std;
class node{
	public:
	int data;
	node* left;
	node* right;
	node(int d){
		data=d;
		left=nullptr;
		right=nullptr;
	}
};
node* buildTree(){
	int data;
	cin>>data;
	if(data==-1)
	return nullptr;
	node * root=new node(data);
	root->left=buildTree();
	root->right=buildTree();
	
	return root;
}
void print(node* root){
	if(root==nullptr)
	return ;
	cout<<root->data<<" ";
	print(root->left);
	print(root->right);
}
  int replace(node*root){
  	int x,y;
  	if(root==nullptr)
  	return 0;
  	if(root->left==nullptr&&root->right==nullptr)
  	return root->data;
  	int lsum=replace(root->left);
  	int rsum=replace(root->right);
  	int temp=root->data;
  	root->data=lsum+rsum;
  	return temp + root->data;
  }
int main(){
	node * root=buildTree();
	print(root);
	cout<<endl;
	replace(root);
	print(root);
}
