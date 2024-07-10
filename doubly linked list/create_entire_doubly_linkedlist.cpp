#include<iostream>
using namespace std;
struct node{
	int data;
	struct node* prev;
	struct node*next;
};
struct node* addempty(struct node *head,int data){
	struct node* temp=new node();
	temp->prev=NULL;
	temp->next=NULL;
	temp->data=data;
	head=temp;
	return head;
	
}
void addAtEnd(struct node* head,int data){
	struct node* temp=new node();
	temp->prev=NULL;
	temp->next=NULL;
	temp->data=data;
	struct node*ptr=head;
	while(ptr->next!=NULL){
		ptr=ptr->next;
	}
	ptr->next=temp;
	temp->prev=ptr;
//	cout<<"called";
//	return head;
}

struct node* createList(struct node * head){
	int n;
	cout<<"enter the total number of nodes :";
	cin>>n;
	if(n==0){
		return head;
	}
	int f;
	cout<<"enter the data of  1 node :";
	cin>>f;
	head=addempty(head,f);
	
	for(int i=1;i<n;i++){
		int data;
		cout<<"enter the data of "<<i+1<< " node :";
		cin>>data;
		addAtEnd(head,data);
	}
	return head;
	
	
}





int main(){
	struct node*head=NULL;
	head = createList(head);
	struct node *ptr=head;
	while(ptr!=NULL){
		cout<<ptr->data<<endl;
		ptr=ptr->next;
	}
	return 0;
}
