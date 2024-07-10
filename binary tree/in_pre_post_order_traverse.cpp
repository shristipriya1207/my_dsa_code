#include<iostream>
//#include<queue>
using namespace std;
class node{
public:	
	int data;
	node *left;
	node *right;
	
	node(int data){
		this->data=data;
		this->left=NULL;
		this->right=NULL;
	}
	
	
};

node* buildTree(node * root){
	int data;
	cout<<"Enter the data"<<endl;
	cin>>data;
	root= new node(data);
	if(data==-1){
		return NULL;
	}
	cout<<"Enter the left child of "<<data<<endl;
	root->left= buildTree(root->left);
	cout<<"Enter the right child of "<<data<<endl;
	root->right= buildTree(root->right);
	return root;
	
}

void inorder(node *root){
	if(root==NULL){
		return;
	}
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}
void preorder(node *root){
	if(root==NULL){
		return;
	}
	cout<<root->data<<" ";
	preorder(root->left);
	
	preorder(root->right);
}
void postorder(node *root){
	if(root==NULL){
		return;
	}
	
	postorder(root->left);
	
	postorder(root->right);
	cout<<root->data<<" ";
}




int main(){
	node *root=NULL;
	root=buildTree(root);
	cout<<"Printing the inorder traversal :"<<endl;
	inorder(root);
	cout<<"\nPrinting the preorder traversal :"<<endl;
	preorder(root);
	cout<<"\nPrinting the postorder traversal :"<<endl;
	postorder(root);
	
	
}























