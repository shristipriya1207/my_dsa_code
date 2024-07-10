#include<iostream>
using namespace std;
 class queue{
 	public:
 	int *arr;
 	int size;
 	int rear,front;
 	queue(int s){
 		size=s;
 		arr= new int[size];
 		rear=front=-1;
	 }
	 void push_front(int x){
	 	if((front ==0 && rear == size-1) || (rear == (front-1)%(size-1))){
	 		cout<<"queue is full";
		 }
		 else if(front == -1){ //insert fisrt element
		 	rear=front=0;
		 	arr[front]=x;
		 }
		 else if(front==0 && rear!=size-1){ // to maintain cyclic nature 
		 	front=size-1;
		 	arr[front]=x;
		 }
		 else{
		 	front++;
		 	arr[front]=x;
		 }
	 }
	 
	 void push_rear(int x){
	 	if((front ==0 && rear == size-1) || (rear == (front-1)%(size-1))){
	 		cout<<"queue is full";
		 }
		 else if(front==-1){
		 	rear=front=0;
		 	arr[rear]=x;
		 }
		 else if(front!=0 && rear == size-1){
		 	rear=0;
		 	arr[rear]=x;
		 }
		 else{
		 	rear++;
		 	arr[rear]=x;
		 }
	 }
	 int pop_front(){
	 	if(front == -1){
	 		cout<<"queue is empty";
	 		return -1;
		 }
		 int ans = arr[front];
		 arr[front]=-1;
		if(front == rear){   //single element
		 	front=rear=-1;
		 }
		 else if(front==size-1){
		 	front =0;
		 }
		 else{
		 	front++;
		 }
		 return ans;
		 
	 }
	 
	 int pop_rear(){
	 if(front == -1){
	 		cout<<"queue is empty";
	 		return -1;
		 }
		 int ans = arr[rear];
		 arr[rear]=-1;
		 
		 if(front == rear){
		 	front=rear=-1;
		 }
		 else if(rear=0){
		 	rear=size-1;
		 }
		 else{
		 	rear--;
		 }
		return ans; 	
	 }
	 
	 
	 
 };
 int main(){
 	queue q1(5);
 	q1.push_front(22);
 	q1.push_front(23);
 	q1.push_rear(24);
 	q1.push_rear(25);
 	cout<<q1.pop_front()<<endl;
 	cout<<q1.pop_rear()<<endl;
 }
