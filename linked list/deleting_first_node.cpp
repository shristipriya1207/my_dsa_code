#include<iostream>
using namespace std;

struct node{
	int data;
	struct node *link;
};
struct node *del_first(struct node * );
int main(){
	struct node *head = new node;
	head->data=45;
	head->link=NULL;
	
	struct node *current = new node;
	current->data=98;
	current->link=NULL;
	
	head->link=current;
	head = del_first(head);
	struct node *ptr = head;
	while(ptr!=NULL){
		cout<<ptr->data;
		ptr=ptr->link;
	}
}

struct node *del_first(struct node *head){
	if(head==NULL){
		cout<<"List is empty ";
	}
	else{
	
	struct node *temp=head;
	head = head->link;
//	free(temp);
	temp=NULL;
}
return head;
}
