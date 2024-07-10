#include<iostream>
#include<stack>
using namespace std;
int put_at_bottom(stack<int>&s1,int temp){
	if(s1.empty()){
		s1.push(temp);
		return 0;
	}
	int k=s1.top();
	s1.pop();
	cout<<"i1"<<endl;
	put_at_bottom(s1,temp);
	cout<<"i2"<<endl;
	s1.push(k);
	cout<<"i3"<<endl;
	return 0;
}
int reverse_stack(stack <int> &s1){
	if(s1.empty()){
		return 0;
	}
	
		int temp=s1.top();
		s1.pop();
		cout<<"p1"<<endl;
				reverse_stack(s1);
						cout<<"p2"<<endl;

		put_at_bottom(s1,temp);
				cout<<"p3"<<endl;

		return 0;
		
		
	
}


int printstack(stack<int> s1){
	if(s1.empty()){
		return -1;
	}
	cout<<s1.top()<<" ";
	int temp=s1.top();
	s1.pop();
	printstack(s1);
	s1.push(temp);
	return 0;
	
}
int main(){
	stack<int> s1;
	s1.push(34);
	s1.push(45);
	s1.push(56);
	s1.push(67);
	cout<<"original stack"<<endl;
	printstack(s1);
	reverse_stack(s1);
		cout<<"\nafter the reverse stack"<<endl;
		printstack(s1);
		
return 0;
	
	
}
