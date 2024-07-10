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

int height(node *root){
	if(root==NULL){
		return 0;
	}
	
	int left = height(root->left);
	int right= height(root ->right);
	int ans = max(left,right)+1;
	return ans;
}



int main(){
	node *root=NULL;
	buildTree(root);
	int level=height(root);
	cout<<"Height of BT :"<<level;
	
	
}
