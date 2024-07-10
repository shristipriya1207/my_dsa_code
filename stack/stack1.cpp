#include<iostream>
using namespace std;
 class stack{
 	int size;
 	int top;
 	int *arr;
 	public:
 	stack(int size){
 		this-> size=size;
 		top=-1;
 		arr = new int[size];
	 }
	 void push(int n){
	 	if(size-top > 1){
	 		top++;
	 		arr[top]= n;
	 		
		 }
		 else{
		 	cout<<"stack is overflow ";
		 }
	 } 	
	 
	 void pop(){
	 	if(top >= 0){
	 		top--;
	 		
		 }
		 else{
		 	cout<<"stack is underflow ";
		 }
	 }
	  peek(){
	 	if(top>=0){
	 		return arr[top];
		 }
		 else{
		 	cout<<"Stack is empty ";
		 }
	 }
	 bool isempty(){
	 	if(top >= -1){
	 		return true;
		 }
		 else{
		 	return false;
		 }
	 }
 };
 int main(){
 	stack st(7);
 	st.push(6);
 	st.push(7);
 	st.push(8);
 	st.push(9);
 	st.push(10);
 	st.push(11);
 	st.push(12);
// 	st.push(13);     // stack ovwerflow
cout<<st.peek()<<endl;
st.pop();
cout<<st.peek()<<endl;
if(st.isempty()){
	cout<<"stack is empty ";
	
}
else{
	cout<<"Stack is not empty";
}
 }
