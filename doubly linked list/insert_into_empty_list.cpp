#include <iostream>
using namespace std;

struct node{
	struct node* prev;
	int data;
	struct node*next;
};
struct node * insertion(struct node*head,int data)
{
	struct node *temp=new node();
	temp->prev=NULL;
	temp->data=data;
	temp->next=NULL;
	head=temp;
	return head;
	
}


int main(){
	struct node *head=NULL;
	head= insertion(head,23);
   cout<<"the first data node :"<<head->data;
	return 0;
	
}
