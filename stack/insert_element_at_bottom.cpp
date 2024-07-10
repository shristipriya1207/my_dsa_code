#include<iostream>
using namespace std;
class stack{
	public:
	int *arr;
	int size;
	int top;
	stack(int n){
		size=n;
		arr=new int[n];
		top=-1;
	}
	void insert(int x){
		if(isempty()){
			push(x);
			return ;
		}
		int num= peek();
		pop();
		insert(x);
		push(num);
	}
	
	void push(int data){
		if(isfull()){
			cout<<"stack is full";
		}
		else{
			top++;
			arr[top]=data;
		}
	}
	void pop(){
		if(isempty()){
			cout<<"stack is empty";
			
		}
		else{
			top--;
		}
	}
	
	int isempty(){
		if(top==-1){
			return 1; 
		}
		else{
			return 0;
		}
	}
	int isfull(){
		if(size==top+1){
			return 1;
		}
		else{
			return 0;
		}
	}
	
	int peek(){
		if(top>=0 && top<size){
			return arr[top];
			
		}
		else{
			cout<<"no element";
			return 0;
		}
	}
	
};
int main(){
	stack s1(4);
	s1.push(3);
	s1.push(35);
	s1.push(45);
	s1.insert(90);
	for(int i=0;i<4;i++){
		cout<<s1.arr[i]<<" ";
	}
}

