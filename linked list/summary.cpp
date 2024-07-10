#include<iostream>
using namespace std;
struct node {
    int data;
    struct node* link;
};
void add_at_end(struct node *head,int d){
   struct node *temp,*ptr;
   temp = new node();
   temp->data=d;
   temp->link =NULL;
   ptr=head;
   while(ptr->link!=NULL){
       ptr=ptr->link;
   }
   ptr->link = temp; 
    
}
struct node * add_at_beg(struct node *head,int d){
    
struct node *ptr = new node();
ptr->data=d;
ptr->link=NULL;
ptr->link=head;
head=ptr;
return head;
}
struct node* delete_beg(struct node *head){
    if(head == NULL){
        cout<<"no list";
    }
    else{
        struct node *temp = head;
        head=head->link;
//        free(temp);
        
    }return head;
}

struct node* delete_last(struct node *head){
    if(head==NULL){
        cout<<"list is empty";
    }
    else if(head->link==NULL){
//        free(head);
        head=NULL;
    }
    else{
        struct node *temp =head;
        struct node *temp2=head;
        while(temp->link!=NULL){
            temp2=temp;
            temp=temp->link;
        }
        temp2->link=NULL;
//        free(temp);
        temp==NULL;
    }
    return head;
}
void del_pos(struct node **head,int pos){
    struct node * current = *head;
    struct node * previous = *head;
    if(*head==NULL){
        cout<<"list is empty";
    }
    else if(pos==1){
        *head = current->link;
//        free(current);
        current =NULL;
    }
    else{
        while(pos!=1){
            previous = current;
            current=current->link;
            pos--;
        }
        previous->link=current->link;
//        free (current);
        current=NULL;
    }
}

int main(){
    struct node *head = new node();
    head->data=45;
    head->link=NULL;
    add_at_end(head,56);
    add_at_end(head,66);
    head = add_at_beg(head,78);
     head = add_at_beg(head,88);
    //  head = delete_beg(head);
    //  head=delete_last(head);
    
    struct node *ptr =head;
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr=ptr->link;
    }
    del_pos(&head,2);
    cout<<endl;
    struct node *ptr2 =head;
    while(ptr2!=NULL){
        cout<<ptr2->data<<" ";
        ptr2=ptr2->link;
    }
    
    
    
}

