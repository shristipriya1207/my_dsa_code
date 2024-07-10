#include<iostream>
using namespace std;
struct node{
	int data;
	node * link;
};
struct node *f=NULL;
struct node *r = NULL;
void enqueue(int data){
	struct node *temp = new node;
	if(temp == NULL){
		cout<<"queue is full";
		exit(1);
	}
	else{
	
	temp->data=data;
	temp->link=NULL;
	if(f == NULL){
		f=r=temp;
		
	}
	r->link = temp;
	r=temp;
}}
int dequeue(){
	int val =-1;
	struct node *temp = f;
	if(f==NULL){
		cout<<"queue is empty";
	}
	else{
		f=f->link;
		val = temp->data;
		temp = NULL;
		
		
	}
	return val;
	
}
void print(){
	struct node * ptr= f;
	while(ptr != NULL){
		cout<<ptr->data<<" ";
		ptr=ptr->link;
	}
}

int main(){
	int choice,data;
	while(1){
		cout<<"1.push"<<endl;
		cout<<"2.print"<<endl;
		cout<<"3.exit"<<endl;
		cout<<"4.pop"<<endl;
		cout<<"enter your choice :";
		cin>>choice;
		switch(choice){
			case 1:
				cout<<"enter the data ";
				cin>>data;
				enqueue(data);
				break;
				case 2:
					print();
					break;
				case 3:
					exit(1);
					break;
				case 4:
					int val = dequeue();
					cout<<"popped : "<<val<<endl;
					
		}
	}
	return 0;
	
}
	
