#include<iostream>
using namespace std;
struct node {
    int data;
    node *link;
};
struct node* add_beg(struct node *head,int data){
	struct node *temp = new node;
	temp->data=data;
	temp->link=head;
	head=temp;
	return head;
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


void del_last_node(struct node *head){
	struct node *temp=head;
	struct node *temp2=head;
	while(temp->link != NULL){
		temp2=temp;
		temp=temp->link;
	} 
	temp2->link=NULL;
	temp=NULL;
}


void display(struct node *head){
    struct node *ptr;
    ptr=head;
    while(ptr!=NULL){
    	cout<<ptr->data<<endl;
    	ptr=ptr->link;
	}
}

int main(){
    int choice ,data;
    node *head = new node;
	head->data=45;
	head->link=NULL;
    while(1){
        cout<<"1.Add in the beginning "<<endl;
        cout<<"2,Add in the end "<<endl;
        cout<<"3.Delete in the beginning "<<endl;
        cout<<"4.Delete in the end "<<endl;
        cout<<"5.Display "<<endl;
        cout<<"6.Exit"<<endl;
        cout<<"Enter you choice :"<<endl;
        cin>>choice;
        switch(choice){
            case 1:
            cout<<"Enter the elemeent :";
            cin>>data;
            head = add_beg(head , data);
            break;
            case 2:
             cout<<"Enter the elemeent :";
            cin>>data;
            add_at_end(head,67);
            break;
            case 3:
            head = del_first(head);
            break;
            case 4:
            del_last_node(head);
            break;
            case 5:
            display(head);
            break;
            case 6:
            exit(1);
            
        }
    }
}
