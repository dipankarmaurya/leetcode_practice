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
int countNode(node* root){
	   if(root==nullptr)
	return 0;
	return 1+countNode(root->left) + countNode(root->right);
}
int sumOfNodes(node * root){
	if(root==nullptr)
	return   0;
	return root->data+sumOfNodes(root->left)+sumOfNodes(root->right);
}
int main(){
	node * root=buildTree();
	print(root);
	int sum= sumOfNodes(root);
	cout<<"sum of node="<<sum<<endl;
	int cnt =countNode(root);
	cout<<"total node present in tree is ="<<cnt<<endl;
}
