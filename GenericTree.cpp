#include<bits/stdc++.h>
using namespace std;
template<typename T>
class node{
	public:
	   T data;
	vector<node<T>*>children;
	node(T data){
		this->data=data;
	}
};
//level wise in put method

node<int>* takeinputlevel(){
	int data;
	queue<node<int>*>que;
	cout<<"enter data"<<endl;
	cin>>data;
	node<int>* root= new node<int>(data);
	que.push(root);	
	while(!que.empty()){
	int n ;
	node<int>* f= que.front();
	que.pop();
	cout<<"enter number of children of"<<f->data<<endl;
	cin>>n;
	//50 1 2 98 60 1 34 0
	for(int i=0;i<n;i++){
	int chld;
	cout<<"enter "<<i+1<<"th children of "<<f->data<<endl;
	cin>>chld;
		node<int>* temp= new node<int>(chld);
		que.push(temp);
		f->children.push_back(temp);
	}
	
}
	
return 	root;
}
//recursive input method
 node<int>* takeInput(){
 	int data;
 	cout<<"enter the data"<<endl;
 	cin>>data;
 	int child;
 	cout<<"enter the number of child of "<<data<<endl;
 	cin>>child;
 	node<int>* root=new node<int>(data);
 	for(int i=1;i<=child;i++){
 	node<int>*temp=takeInput();
 	   root->children.push_back(temp);
	 }
	 return root;
 }
 void print(node<int>*root){
 	
 	cout<<root->data<<" : ";
 	for(int i=0;i<root->children.size();i++){
 		cout<<root->children[i]->data<<",";
	 }
	 cout<<endl;
	 for(int i=0;i<root->children.size();i++){
 		print(root->children[i]);
	 }
 }
int main(){
	node<int>* root=takeinputlevel();
	print(root);	
}

