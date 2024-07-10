#include<iostream>
#include<string.h>
using namespace std;
#define MAX 100
char stack[MAX];
char infix[MAX], postfix[MAX];
int top = -1;

void push(char);
char pop();
int isempty();
void inToPost();
int space(char);
void print();
int precedence(char);
int main(){
	cout<<"Enter the infix expression :";
	cin>>infix;
	inToPost();
	print();
	return 0;
}

void inToPost(){
	char symbol,next;
	int j=0;
	for(int i=0;i<strlen(infix);i++){
		symbol = infix[i];
		if(!space(symbol)){
			switch(symbol){
				case '(' :
					push(symbol);
					break;
				case ')':
				while((next=pop())!='('){
					postfix[j++]=next;
					}
				    break;
				case '+':
				case '-':
			    case '*':
			    case '/':
			    case '^':
			    	while(!isempty() && precedence(stack[top]) >= precedence(symbol)){
			    		postfix[j++]=pop();
					}
					push(symbol);
					break;
					
					default:
						postfix[j++]=symbol;
					
					
			}
		}
	}
	while(!isempty()){
		postfix[j++]=pop();
		}
	postfix[j]='\0';
		
}

int space(char c){
	if(c== ' ' || c=='\t'){
		return 1;
	}
	else{
		return 0;
	}
}

int precedence(char symbol){
	switch(symbol){
		case '^':
			return 3;
		case '/':
		case '*':
			return 2;
		case '+':
		case '-':
		    return 1;
		default:
		 return 0;		
	}
}


void print(){
	int i=0;
cout<<"the equivalent postfix expression is :";
while(postfix[i]){
	cout<<postfix[i++];
}	
cout<<"\n";
}

void push(char c){
	if(top == MAX-1){
		cout<<"Stack overflow ";
		exit(1);
	}
	else{
		top++;
		stack[top]=c;
	}
}

char pop(){
	char c;
	if(top==-1){
		cout<<"Stack overflow ";
		
	}
	c=stack[top];
	top--;
	return c;
}

int isempty(){
	if(top==-1){
	return 1;
	}
	else{
		return 0;
	}
	
}




























