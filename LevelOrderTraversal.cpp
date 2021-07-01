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
int getDepth(node* root){
 if(root==nullptr)
 return 0;	
 int ls=getDepth(root->left);
 int rs=getDepth(root->right);
return max(ls,rs)+1;
}
void printKthLevel(node* root,int k)
{
	if(root==nullptr){
		return;
	}
	if(k==1){
		cout<<root->data<<" ";
		return;
	}
	printKthLevel(root->left,k-1);
	printKthLevel(root->right,k-1);
	return ;
}
int main(){
	node * root=buildTree();
	
    int height =getDepth(root);
    cout<<height<<endl;
    for(int i=1;i<=height;i++)
    printKthLevel(root,i);

}
