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

class Pair{
	public:
		int height;
		int diameter;
};
//optimize way to compute diameter
 Pair fastdiameter(node*root){
	Pair p;
	if(root==nullptr){
	p.height=0;
	p.diameter=0;
	return p;	
	}
	//otherwise
	Pair lh=fastdiameter(root->left);
	Pair rh=fastdiameter(root->right);
	p.height=max(lh.height,rh.height)+1;
	p.diameter=max(lh.height+rh.height,max(lh.diameter,rh.diameter));
	return p;
}
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
//slow metod o(n^2)
int slowdiameter(node* root){
	if(root==nullptr)
	return 0;
	int lh =slowdiameter(root->left);
	int rh=slowdiameter(root->right);
	int op1=lh+rh;
	int op2=slowdiameter(root->left);
	int op3=slowdiameter(root->left);
	return max(op1,max(op2,op3));
}
void print(node* root){
	if(root==nullptr)
	return ;
	cout<<root->data<<" ";
	print(root->left);
	print(root->right);
}

int main(){
	node * root=buildTree();
	print(root);
}
