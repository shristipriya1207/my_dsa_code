#include<iostream>
using namespace std;
struct node{
    int data;
    node *link;
};
void add_at_end(struct node *head , int data){
    struct node *ptr;
    ptr=head;
    struct node *temp = new node;
    temp->data=data;
    temp->link=NULL;
    while(ptr->link !=NULL){
        ptr=ptr->link;
    }
    ptr->link = temp;
}
void display ( struct node *head){
    struct node *ptr=head;
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr=ptr->link;
    }
}
// struct node* reverseRecursive (struct node *head){
//     if(head == NULL || head->link ==NULL){
//         return head;
//     }
//   struct node*newhead =  reverseRecursive(head->link);
//   head->link->link = head;
//   head->link = NULL;
//   return newhead;
// }
struct node * reverse(struct node *head){
    if(head==NULL || head->link ==NULL){
        return head;
    }
  struct   node *prev = head;
  struct node *curr = head->link;
  while(curr!= NULL){
      struct node *next = curr->link;
      curr->link= prev;
      //update
  prev= curr;
  curr=next;
  }
  head->link =NULL;
  head=prev;
  return head;
}
int main(){
    struct node *head = new node;
    head->data=1;
    head->link=NULL;
    add_at_end(head,2);
    add_at_end(head,3);
    add_at_end(head,4);
    add_at_end(head,5);
    display(head);
    cout<<endl;
//   struct  node *head1 = reverseRecursive(head);
//     display(head1);
 struct  node *head1 = reverse(head);
    display(head1);


}
