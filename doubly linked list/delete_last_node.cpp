#include <iostream>
using namespace std;

struct node{
	int data;
	struct node *prev;
	struct node* next;
};
void delete_last_node(struct node* head){
struct node*temp;
struct node*temp2;
temp=head;
while(temp->next!=NULL){
	temp=temp->next;
}
temp2=temp->prev;	
temp2->next=NULL;
temp->next=NULL;

}




//struct node* delete_first_node(struct node*head){
//	struct node*temp=head;
//	
//	head=head->next;
//	temp=NULL;
//	head->prev=NULL;
//	return head;
//	
//}


void insert_at_end(struct node *head,int data){
	struct node*temp=new node();
	temp->next=NULL;
	temp->prev=NULL;
	temp->data=data;
	struct node *ptr=head;
	while(ptr->next!=NULL){
		ptr=ptr->next;
	}
	ptr->next=temp;
	temp->prev=ptr;
		
}
struct node * insert_in_empty_list(struct node*head,int data){
	struct node* temp=new node();
	temp->prev=NULL;
	temp->next=NULL;
		temp->data=data;
		head=temp;
		return head;
		
}


int main(){
	struct node* head = NULL;
	head=insert_in_empty_list(head,35);
//	head=insert_at_beginning(head,45);
//	head=insert_at_beginning(head,55);
	insert_at_end(head,65);
	insert_at_end(head,59);
//	head=delete_first_node(head);
delete_last_node(head);
	struct node *ptr;
	ptr=head;
	while(ptr!=NULL){
		cout<<ptr->data<<endl;
		ptr=ptr->next;
	}
}
