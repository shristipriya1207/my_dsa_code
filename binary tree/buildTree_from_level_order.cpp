#include<iostream>
#include<queue>
using namespace std;
class node{
	public:
	int data;
	node *left;
	node*right;
	
	
	node(int data){
		this->data=data;
		this->left=NULL;
		this->right=NULL;
	}
};

void buildTreeFromLevelOrderTraverse(node* &root){
	queue<node *> q;
	cout<<"Enter data for root :"<<endl;
	int data;
	cin>>data;
	 root =new node(data);
	 q.push(root);
	 while(!q.empty()){
	 	node * temp=q.front();
	 	q.pop();
	 	cout<<"Enter left node of "<<temp->data<<endl;
	 	int leftNode;
	 	cin>>leftNode;
	 	 if(leftNode != -1){
	 	 	
	 	 	temp-> left = new node(leftNode);
	 	 	q.push(temp->left);
		  }
		 cout<<"Enter the right node of "<<temp->data<<endl;
		 int rightNode;
		 cin>>rightNode;
		 if(rightNode != -1){
		 	temp->right = new node(rightNode);
		 	q.push(temp->right);
		 } 
	 }
}
void inorder(node *root){
	if(root==NULL){
		return;
		
	}
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}



int main(){
	node *root=NULL;
	buildTreeFromLevelOrderTraverse(root);
	cout<<"Printing the inorder :"<<endl;
	inorder(root);
	
}
