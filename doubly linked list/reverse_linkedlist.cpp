#include <iostream>
using namespace std;

struct node{
	int data;
	struct node *prev;
	struct node* next;
};

struct node *reverse_node(struct node *head){
	struct node *ptr1=head;
	struct node *ptr2=ptr1->next;
	ptr1->prev=ptr2;
	ptr1->next=NULL;
	while(ptr2!=NULL){
	ptr2->prev=ptr2->next;	
	ptr2->next=ptr1;
	ptr1=ptr2;
	ptr2=ptr2->prev;
	
	}
	head=ptr1;
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
void insert_in_between(struct node *head,int data,int pos){  //insertion after the position
struct node *temp,*temp2;
struct node* newp=new node();
newp->next=NULL;
newp->prev=NULL;
newp->data=data;
temp=head;
while(pos!=1){
	temp=temp->next;
	pos--;
}
if(temp->next==NULL){
	temp->next=newp;
	newp->prev=temp;
}
else{

temp2=temp->next;
temp->next=newp;
temp2->prev=newp;
newp->prev=temp;
newp->next=temp2;
}


}

void insert_in_between_at_the_given_pos(struct node *head,int data,int pos){  //insertion before the position
struct node *temp,*temp2;
struct node* newp=new node();
newp->next=NULL;
newp->prev=NULL;
newp->data=data;
temp=head;
while(pos>2){
	temp=temp->next;
	pos--;
}
if(pos==1){
	head = insert_at_beginning(head,data);
	
}
else{

temp2=temp->next;
temp->next=newp;
temp2->prev=newp;
newp->prev=temp;
newp->next=temp2;
}


}
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
void print(struct node *head){
	struct node *ptr;
	ptr=head;
	while(ptr!=NULL){
		cout<<ptr->data<<endl;
		ptr=ptr->next;
	}
}


int main(){
	struct node* head = NULL;
	head=insert_in_empty_list(head,35);
	head=insert_at_beginning(head,45);
	head=insert_at_beginning(head,55);
	insert_at_end(head,65);
	insert_in_between(head,78,2);
	insert_in_between_at_the_given_pos(head,99,3);
	cout<<"before reverse "<<endl;
//	struct node *ptr;
//	ptr=head;
//	while(ptr!=NULL){
//		cout<<ptr->data<<endl;
//		ptr=ptr->next;
//	}
    print(head);

	cout<<"after reverse "<<endl;
	head=reverse_node(head);
	print(head);
	
}
