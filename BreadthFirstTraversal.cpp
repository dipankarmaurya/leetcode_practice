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
void bfs(node* root){
	queue<node*>queue;
   queue.push(root);
   queue.push(nullptr);
   while(!queue.empty())
   {
   	node* nn=queue.front();
   	if(nn==nullptr){
   		cout<<endl;
   		queue.pop();
   		if(!queue.empty()){
   			queue.push(nullptr);		 
		  }
	   }
	else{
	 queue.pop();
   	 cout<<nn->data<<" ";
     if(nn->left)
   	    queue.push(nn->left);
   	 if(nn->right)
   	    queue.push(nn->right);
   }
}
}

int main(){
	node * root=buildTree();
     bfs(root);
}
