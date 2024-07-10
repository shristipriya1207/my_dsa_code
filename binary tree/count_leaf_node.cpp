#include<iostream>
#include<queue>
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

void buildTree(node* &root){
	queue<node*> q;
	cout<<"Enter data fo root :";
	int data;
	cin>>data;
	root = new node(data);
	q.push(root);
	while(!q.empty()){
		node* temp=q.front();
		q.pop();
		
		cout<<"Enter left node for:"<<temp->data<<endl;
		int leftnode;
		cin>>leftnode;
		if(leftnode != -1){
			temp->left= new node(leftnode);
			q.push(temp->left);
			
		}
		cout<<"Enter right node for:"<<temp->data<<endl;
		int rightnode;
		cin>>rightnode;
		if(rightnode != -1){
			temp->right= new node(rightnode);
			q.push(temp->right);
			
		}
	}
}

void inorder(node *root , int &cnt){
	if(root==NULL){
		return ;
	}
	inorder(root->left,cnt);
	if(root->left == NULL && root->right== NULL){
		cnt++;
	}
	inorder(root->right,cnt);
}

int count_leaf_nodes(node *root){
	int cnt=0;
	inorder(root,cnt);
	return cnt;
}


int main(){
	node *root=NULL;
	buildTree(root);
	int count = count_leaf_nodes(root);
	cout<<"Total number of leaf node is :"<<count;
}
