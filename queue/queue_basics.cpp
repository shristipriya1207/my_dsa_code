#include<iostream>
using namespace std;
class queue{
	public:
		int *arr;
		int size;
		int front;
		int rear;
		
		queue(){
			size=10001;
			arr = new int[size];
			front = 0;
			rear = 0;
		}
		void push(int data){
			if(size==rear){
				cout<<"queue is full ";
			}
			else
			{
				arr[rear]=data;
				rear++;
				
			}
		}
		
		int pop(){
			int p;
			if(front==rear){
				cout<<"queue is empty ";
			}
			else{
			
			p=arr[front];
			arr[front]= -1;
			front++;
			if(rear==front){
				front=0;
				rear=0;
			}
		}
		return p;
		}
		
		bool isempty(){
			if(rear==front){
				return true;
			}
			else 
			return false;
		}
		
		int isfull(){
			if(size==rear){
				return 1;
			}
			else
			return -1;
		}
		int front1(){
			if(rear==front){
				return -1;
			}
			else{
			
			return arr[front];}
		}
		
};
int main(){
	queue q1;
	q1.push(4);
	q1.push(5);
	q1.push(7);
	for(int i=0;i<3;i++){
		cout<<q1.arr[i]<<endl;
	}
	int i=q1.pop();
	cout<<"this is popped :"<<i<<endl;
	cout<<"front element :"<<q1.front1();
		for(int i=0;i<3;i++){
		cout<<q1.arr[i]<<endl;
	}
}
