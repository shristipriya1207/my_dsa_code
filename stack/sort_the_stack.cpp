#include<iostream>
#include<stack>
using namespace std;
void sorted_insert(stack<int>&s,int num){
	if(s.empty() || (!s.empty() && s.top()>num))
	{
		s.push(num);
		return;
	}
	int n=s.top();
	s.pop();
//	cout<<"i1"<<endl;
	sorted_insert(s,num);
//	cout<<"i2"<<endl;
	s.push(n);
//	cout<<"i3"<<endl;
}



void sorted_stack(stack<int>&s){
	if(s.empty()){
		return ;
	}
	int num = s.top();
	s.pop();
//	cout<<"ere"<<endl;
	sorted_stack(s);
//	cout<<"fd"<<endl;
	sorted_insert(s,num);
//	cout<<"sortd"<<endl;

}

void print(stack<int>&s){
	if(s.empty()){
		return ;
	}
	int n =s.top();
	cout<<n<<" ";
	 s.pop();
	print(s);
	s.push(n);
	
}



int main(){
	stack<int>s1;
	s1.push(45);
	s1.push(-2);
	s1.push(23);
	s1.push(-7);
	s1.push(67);
	sorted_stack(s1);
	print(s1);
}
