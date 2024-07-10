#include<iostream>
using namespace std;

struct node{
	int data;
	struct node *link;
};
struct node* add_beg(struct node *,int);

int main(){
	struct node *head = new node;
	head->data=45;
	head->link=NULL;
	
	struct node *ptr = new node;
	ptr->data=56;
	ptr->link=NULL;
	
	head->link=ptr;
	
	int data=3;
	head = add_beg(head , data);
	
	ptr=head;
	while(ptr != NULL){
		cout<<ptr->data<<endl;
		ptr=ptr->link;
	}
}
struct node* add_beg(struct node *head,int data){
	struct node *temp = new node;
	temp->data=data;
	temp->link=head;
	head=temp;
	return head;
}
