#include<iostream>
#include<stack>
#include<queue>
using namespace std;

queue<int> reverse (queue<int>q){
	stack<int>s;
	while(!q.empty()){
		int element = q.front();
		q.pop();
		s.push(element);
	}
// 	we are using stack to reverse(first taking element from queue and pushing into the 
//stack and again poping from stack and inserting into the queue)
	while(!s.empty()){
		int element = s.top();
		s.pop();
		q.push(element);
	}
	return q;
	
}
int main(){
	queue<int>q;
	int a;
	cout<<"enter the element :";
	for(int i=0;i<5;i++){
		cin>>a;
		q.push(a);
	}
	
	queue<int>temp = q;    //coping the original queue to temp queue for display
	cout<<"original queue ";
	while(!temp.empty()){
		cout<<temp.front()<<" ";
		temp.pop();
	}
	cout<<"\n";
	
	q=reverse(q);
	cout<<"reversed queue :";
	queue<int>temp1 = q;
	cout<<"original queue ";
	while(!temp1.empty()){
		cout<<temp1.front()<<" ";
		temp1.pop();
	}
	
}

