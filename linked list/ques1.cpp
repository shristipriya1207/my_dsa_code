#include<iostream>
using namespace std;
struct node{
    int data;
    struct node *link;
};
struct node * add_at_end(struct node *head , int data){
    struct node*temp = new node();
    temp->data=data;
    temp->link=NULL;
    if(head == NULL){
        head=temp;
        return head;
    }
    struct node *ptr= head;
    while(ptr->link!=NULL){
        ptr=ptr->link;
    }
    ptr->link = temp;
    return head;
}
struct node * deletenode(struct node* head){
    struct node *curr =head;
    struct node *prev = head; 
    if(head==NULL){
        delete(head);
    }
    while(curr->link!=NULL){
        int a = curr->link->data;
        if(a<0){
            prev = curr->link;
            curr->link = prev->link;
            delete(prev);
        }
        curr=curr->link;
    }
    return head;
    
}
int main(){
    int n;
    struct node *head = NULL;
    
    for(int i=0;i<6;i++){
        cout<<"enter the data :";
        cin>>n;
       head= add_at_end(head,n);
    }
    
    struct node *ptr=head;
    head = deletenode(head);
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr=ptr->link;
    }
    
    return 0;
}
