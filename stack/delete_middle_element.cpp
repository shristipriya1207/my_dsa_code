#include<iostream>
#include<stack>
using namespace std;
void delete_mid(stack<int>&s1,int count,int n){
	if(count==n/2){
		s1.pop();
		return ;
	}
	int temp=s1.top();
	s1.pop();
	delete_mid(s1,count+1,n);
	s1.push(temp);
}
void print_stack(stack<int>s1){
	if(s1.empty()){
		return ;
	}
	int temp=s1.top();
	
	cout<<s1.top()<<" ";
	s1.pop();
	print_stack(s1);
	s1.push(temp);
	
	
}

int main(){
	stack<int>s1;
	s1.push(1);
	s1.push(2);
	s1.push(3);
	s1.push(4);
	s1.push(5);
	s1.push(6);
	int count =0;
	int size=6;
	cout<<"before deleting middle element"<<endl;
	print_stack(s1);
	cout<<"after deleting midddle element"<<endl;
	delete_mid(s1,count,size);
	print_stack(s1);
	
}
