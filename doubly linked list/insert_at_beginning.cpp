#include <iostream>
using namespace std;

struct node{
	int data;
	struct node *prev;
	struct node* next;
};
struct node * insert_in_empty_list(struct node*head,int data){
	struct node* temp=new node();
	temp->prev=NULL;
	temp->next=NULL;
		temp->data=data;
		head=temp;
		return head;
		
}
struct node * insert_at_beginning(struct node *head,int data){
	struct node*temp = new node();
	temp->prev=NULL;
	temp->next=NULL;
	temp->data=data;
	temp->next=head;
	head->prev=temp;
	head=temp;
	return head;
}

int main(){
	struct node* head = NULL;
	head=insert_in_empty_list(head,35);
	head=insert_at_beginning(head,45);
	head=insert_at_beginning(head,55);
	struct node *ptr;
	ptr=head;
	while(ptr!=NULL){
		cout<<ptr->data<<endl;
		ptr=ptr->next;
	}
}
