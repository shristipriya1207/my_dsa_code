#include<iostream>
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
void insert_at_end(struct node *head,int data){
	struct node*temp;
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


struct node* delete_first_node(struct node*head){
	struct node*temp=head;
	
	head=head->next;
	temp=NULL;
	head->prev=NULL;
	return head;
	
}
void display(struct node *head){
    struct node *ptr;
    ptr=head;
    while(ptr!=NULL){
    	cout<<ptr->data<<endl;
    	ptr=ptr->next;
	}
}

int main(){
	struct node* head = NULL;
	int choice ,data;
	 while(1){
	     cout<<"0.Add first element "<<endl;
        cout<<"1.Add in the beginning "<<endl;
        cout<<"2,Add in the end "<<endl;
        cout<<"3.Delete in the beginning "<<endl;
        cout<<"4.Delete in the end "<<endl;
        cout<<"5.Display "<<endl;
        cout<<"6.Exit"<<endl;
        cout<<"Enter you choice :"<<endl;
        cin>>choice;
        switch(choice){
            case 0:
            cout<<"Enter the elemeent :";
            cin>>data;
            head=insert_in_empty_list(head,data);
            break;
            case 1:
            cout<<"Enter the elemeent :";
            cin>>data;
            head=insert_at_beginning(head,data);
            break;
            case 2:
             cout<<"Enter the elemeent :";
            cin>>data;
            insert_at_end(head,65);
            break;
            case 3:
            head=delete_first_node(head);
            break;
            case 4:
            delete_last_node(head);
            break;
            case 5:
            display(head);
            break;
            case 6:
            exit(1);
            
        }
    }
}
