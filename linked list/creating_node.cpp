#include<iostream>
using namespace std;
void count_of_nodes(struct node *);
struct node{
	int data;
	node* link;
};
int main(){
	node *head = new node;
	
	head->data=42;
	head->link=NULL;
	cout<<"Data of 1st nodes :"<<head->data<<endl;
	
	
	node *current = new node;
	current->data=96;
	current->link=NULL;
	head->link=current;
	cout<<"Data of 2nd node "<<current->data<<endl;
	
	 
	
	current = new node;
	current->data=76;
	current->link=NULL;
	head->link->link=current;
	cout<<"Data of 3rd node "<<current->data<<endl;
	
	//counting the number of nodes 
	 count_of_nodes(head);
	
	
	delete current;
	delete head;
	
}
void count_of_nodes(struct node *head){
	int count =0;
	if(head==NULL){
		cout<<"linked list is empty ";
	}
	struct node *ptr=NULL;
	ptr = head;
	while(ptr!=NULL){
		cout<<"nodes data "<<ptr->data<<endl;
		count++;
	    ptr=ptr->link;
	}
	cout<<"the number of nodes "<<count<<endl;
}
