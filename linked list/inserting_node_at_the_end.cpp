#include<iostream>
using namespace std;

struct node{
	int data;
	struct  node *link;
};
void add_at_end(node *,int);
int main(){
	node *head = new node;
	head->data=45;
	head->link=NULL;
	cout<<"first node data :"<<head->data;
	
	node *current = new node;
	current->data=98;
	current->link=NULL;
	head->link=current;
	cout<<"second node data :"<<current->data;
	
	current = new node;
	current->data=3;
	current->link=NULL;
	head->link->link=current;
	cout<<"third node data :"<<current->data;
	
	add_at_end(head,67);
// 	cout<<"last node data :"<<head->data;
	
	delete current;
	delete head;
}

void add_at_end(struct node *head,int data){
struct node *ptr, *temp;
ptr=head;
temp = new node;
temp->data=data;
temp->link=NULL;
while(ptr->link!=NULL){
	ptr=ptr->link;
}
ptr->link=temp;	
cout<<"last node data :"<<temp->data;
}

