#include<iostream>
#include<string.h>
using namespace std;
#define MAX 100

int top=-1;
char stack[MAX];

char pop();
void push(char);
int isempty();
int isfull();
int check_balance(char *);
int match_char(char , char);


int main(){
	char expr[MAX];
	int balanced;
	cout<<"Enter the algebraic expreesion: ";
	cin>>expr;
	balanced = check_balance(expr);
	if(balanced == 1){
		cout<<"The expression is valid bro!!!!";
	}
	else{
		cout<<"The expression is not valid bro .... don't worry ... try again!!!!!1";
	}
}

int check_balance(char* s){
	char temp;
	for(int i=0;i<strlen(s);i++){
		if(s[i]=='{' || s[i] == '[' || s[i]=='('){
			push(s[i]);
		}
		if(s[i]=='}' || s[i] == '}' || s[i]=='}'){	
		if(isempty()){
			cout<<"Right brackets are more than the left brackets... oopss!!!!!!";
			return 0;
		}
		else{
			temp = pop();
			if(!match_char(temp,s[i])){
				cout<<"mismatched brackets.";
				return 0;
				
			}
		}
		}
		
		
	}
	if(isempty()){
		cout<<"brackets are well balanced";
		return 1;
		}
	else{
		cout<<"left brackets are more than right .";
		return 0;
	}
}

int match_char(char a, char b){
	
	if(a=='[' && b== ']')
	return 1;
	if(a=='(' && b== ')')
	return 1;
	if(a=='{' && b== '}')
	return 1;
return 0;	
}

void push(char c){
	if(isfull()){
		cout<<"STACK is overflow.";}
		else{
			top++;
			stack[top]= c;
		}
	
}

char pop(){
	char c;
	if(isempty()){
		cout<<"stack is underflow";
	}
	else{
		c=stack[top];
		top--;
		return c;
	}
}

int isempty(){
	if(top == -1){
		return 1;
	}
	else{
		return 0;
	}
	   

}

int isfull(){
	if(top == MAX-1)
	return 1;
	else
	return 0;
}































