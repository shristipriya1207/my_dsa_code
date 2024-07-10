#include<iostream>
using namespace std;
#define MAX 50

int stack[MAX];
int top =-1;

int isfull(){
if(top == MAX-1){
//	cout<<"Stack is overflow ";
    return 1;
}
else 
      
	return 0;	
}

int isempty(){
	if(top == -1){
		return 1;
	}
	else{
		return 0;
	}
}

void push(int num){
	if(!isfull()){
		top++;
		stack[top]= num;
	}
	else{
		cout<<"stack is overflow ";
	}
}

int pop(){
	if(isempty()){
		cout<<"stack is underflow ";
	}
	else{
		int n= stack[top];
		top--;
		return n;
	}
	
}
void prime_factor(int num){
	int i=2;
	while(num != 1){
		while(num % i == 0){
			push(i);
			num = num/ i;
			
		}
		i++;
	}
	while(top != -1){
		cout<<pop()<<"  ";
		
	}
	
}

int main(){
	int n;
	cout<<"ENTER A NUMBER TO FIND THE PRIME FACTIRISATION :";
	cin>>n;
	prime_factor(n);
}
