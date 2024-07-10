#include<iostream>
using namespace std;
class queue{
	public:
	int *arr;
	int front;
	int rear;
	int size;
	
	queue(int n){
		size=n;
		arr=new int[size];
		front=-1;
		rear=-1;
		
	}
	void push(int data){
		if((front==0 && rear == size-1) || (rear==(front-1)%(size-1))){
			cout<<"queue is full ";
		}
		else if(front == -1){
			front=rear=0;
			arr[rear]=data;
		}
		else if(front !=0 && (rear==size-1)){ //to maintain cyclic nature
			rear=0;
			arr[rear]=data;
		}
		else{
			rear++;
			arr[rear]=data;
//			rear++;
		}
	}
	
	int pop(){
		if(front==-1){
			cout<<"queue is empty";
			return -1;
		} 
		int ans = arr[front];
		arr[front]=-1; 
		if(front ==rear){    //single element present
			front=rear=-1;
		}
		else if(front==size-1){   //to maintain cyclic nature
			front=0;
		}
		else{
			front++;
		}
		return ans;
	}
	
	
	
};

int main(){
	queue q1(4);
	q1.push(4);
	q1.push(6);
	q1.push(5);
	for(int i=0;i<3;i++){
		cout<<q1.arr[i]<<endl;
	}
	cout<<"popped :"<<q1.pop()<<endl;
	q1.push(8);
	q1.push(10);
	
		for(int i=0;i<5;i++){
		cout<<q1.arr[i]<<endl;
	}
}
