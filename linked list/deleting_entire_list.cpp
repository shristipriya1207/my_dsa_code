#include<iostream>
using namespace std;
struct node{
	int data;
	node *link;
};
void add_last_end(struct node * ,int);
// void del_last_node(struct node *);
// void again_del(struct node *);
struct node* deleting(struct node *head);
int main(){
	struct node *head = new node;
	head->data=49;
	head->link=NULL;
    add_last_end (head,90);
    add_last_end (head,11);
    add_last_end (head,22);
    head=deleting(head);
    // del_last_node(head);
    // again_del(head);
    if(head==NULL){
        cout<<"list is deleted";
    }
    struct node *ptr;
    ptr=head;
    while(ptr!=NULL){
    	cout<<ptr->data<<endl;
    	ptr=ptr->link;
	}
	
}
void add_last_end(struct node *head,int data){
	struct node *ptr,*temp;
	ptr=head;
	temp = new node;
	temp->data=data;
	temp->link=NULL;
	while(ptr->link!=NULL){
		ptr=ptr->link;
	}
	ptr->link=temp;
//	cout<<"inserted";
}
struct node* deleting(struct node *head){
    struct node *temp = head;
    while(temp!=NULL){
        temp=temp->link;
        // delete head;
        head=temp;
    }
    return head;
}


//deleting last node using two pointers
// void del_last_node(struct node *head){
// 	struct node *temp=head;
// 	struct node *temp2=head;
// 	while(temp->link != NULL){
// 		temp2=temp;
// 		temp=temp->link;
// 	}
// 	temp2->link=NULL;
// 	temp=NULL;
// }

// //deleting last node using one pointer
// void again_del(struct node *head){
// 	if(head==NULL){
// 		cout<<"list is empty";
// 	}
// 	else if(head->link==NULL){
// 		head=NULL;
// 	}
// 	else{
// 		struct node *temp=head;
// 		while(temp->link->link != NULL){
// 			temp=temp->link;
// 		}
// 		temp->link=NULL;
// 	}
// }
