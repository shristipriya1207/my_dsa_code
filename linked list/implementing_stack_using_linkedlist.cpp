#include<iostream>
using namespace std;
struct node{
	int data;
	node* link;
} *top = NULL;

void push(int data){
	struct node *temp = new node;
	temp->data=data;
	temp->link=NULL;
	if(temp == NULL){
		cout<<"stack is full";
		exit(1);
	}
	temp->link = top;
	top=temp;
		
	
}
int isempty(){

	if(top==NULL){
		return 1;
	}
	else{
		return 0;
	}
}

int pop(){
	struct node *temp = top;
	if(isempty()){
	cout<<"stack underflow";
	exit(1);
	}
	int val = temp->data;
	top=top->link;
	temp = NULL;
	return val;
}
void print(){
	struct node *ptr=top;
	if(isempty()){
	cout<<"stack underflow";
	exit(1);
	}
	while(ptr!=NULL){
		cout<<ptr->data<<" ";
		ptr=ptr->link;
	}

	cout<<endl;
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
				push(data);
				break;
				case 2:
					print();
					break;
				case 3:
					exit(1);
					break;
				case 4:
					int val = pop();
					cout<<"popped : "<<val<<endl;
					
		}
	}
	return 0;
	
}	

 
