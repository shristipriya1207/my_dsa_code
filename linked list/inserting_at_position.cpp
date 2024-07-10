#include<iostream>
using namespace std;
struct node{
	int data;
	node *link;
};
void add_at_end(struct node* ,int);
void add_at_pos(struct node *,int,int);
int main(){
	struct node *head=new node;
	head->data=45;
	head->link=NULL;
	
	add_at_end(head,98);
	add_at_end(head,3);
	
	
	int data =67,pos=3;
	add_at_pos(head,data,pos);
	
	struct node *ptr=head;
	while(ptr!=NULL){
		cout<<ptr->data<<endl;
		ptr=ptr->link;
	}
	
	
	
	
}

void add_at_end(struct node*head , int data){
	struct node *ptr,*temp;
	ptr=head;
	temp=new node;
	temp->data=data;
	temp->link=NULL;
	while(ptr->link!=NULL){
		ptr=ptr->link;
	}
	ptr->link=temp;
	
}

void add_at_pos(struct node*head,int data,int pos){
	struct node *ptr = head ;
	struct node *ptr2 = new node;
	ptr2->data=data;
	ptr2->link=NULL;
	
	while(pos!=2){
		ptr=ptr->link;
		pos--;
	}
	ptr2->link= ptr->link;
	ptr->link=ptr2;
	
	
}
























