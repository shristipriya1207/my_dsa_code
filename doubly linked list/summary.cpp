#include<iostream>
using namespace std;
struct node{
    int data;
    struct node*prev;
    struct node*next;
};
struct node * emptynode(struct node *head ,int data){
    struct node * temp = new node();
    temp->prev =NULL;
    temp->data=data;
    temp->next=NULL;
    head=temp;
    return head;
}
struct node * add_at_beg(struct node *head,int data){
    struct node * temp = new node;
    temp->prev=NULL;
    temp->data=data;
    temp->next=NULL;
    temp->next = head;
    head->prev = temp;
    head=temp;
    return head;
}
void add_at_end(struct node *head ,int data){
    struct node * temp = new node;
    struct node *ptr = head;
    temp->prev=NULL;
    temp->next=NULL;
    temp->data=data;
    while(ptr->next!=NULL){
        ptr=ptr->next;
    }
    ptr->next=temp;
    temp->prev = ptr;
}
struct node * add_at_pos(struct node * head , int data,int pos){
    struct node * temp = new node();
    struct node * ptr=head;
    temp->next=NULL;
    temp->prev=NULL;
    temp->data=data;
    while(pos!=1){
        ptr=ptr->next;
        pos--;
    }
    if(ptr->next ==NULL){
        ptr->next=temp;
        temp->prev=ptr;
    }
   else{ struct node *ptr2= NULL;
    ptr2=ptr->next;
    ptr->next = temp;
    ptr2->prev= temp;
    
    temp->next = ptr2;
    temp->prev = ptr;}
    return head;
    
}
struct node * delete_at_beg(struct node*head){
    struct node *temp = head;
    head=head->next;
//    free(temp);
    head->prev=NULL;
    return head;
}


int main(){
    struct node *head =NULL;
    head = emptynode(head,23);
    // cout<<head->data;
    head= add_at_beg(head,24);
    add_at_end(head,25);
    head = add_at_pos(head, 26,3);
    head= delete_at_beg(head);
    struct node * ptr = head;
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
}
