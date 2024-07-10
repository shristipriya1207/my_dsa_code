#include<iostream>
using namespace std;
class stack{
	int size;
	int *arr;
	int top1;
	int top2;
	
	public:
		stack(int size){
			this -> size= size;
			arr= new int[size];
			top1 =-1;
			top2 = size;
			
		}
		
		void push1(int n){
			if(top2-top1>1){
				top1++;
				arr[top1]= n;
				cout<<"stack 1 is called"<<endl;
			}
			else{
				cout<<"stack is overflow"<<endl;
			}
			
		}
		void push2(int m){
			if(top2-top1>1){
				top2--;
				arr[top2]= m;
				cout<<"stack 2 is called"<<endl;
			}
			else{
				cout<<"stack is overflow"<<endl;
			}
		}
		int pop1(){
		if(top1 >= 0){
			int ans = arr[top1];
			top1--;	
			return ans;
		}
		else{
			cout<<"stack is underflow"<<endl;
			return -1;
		}	
		}
		int pop2(){
		if(top2 < size){
			int ans = arr[top2];
			top2++;	
			return ans;
		}
		else{
			cout<<"\nstack is underflow"<<endl;
			return -1;
		}	
		}
		
		
};


int main(){
	stack st(3), st1(3);
	st.push1(5);
	st.push1(8);
	st.push1(7);
	st1.push2(6);
	st1.push2(9);
	st1.push2(12);
	cout<<"element is popped out from second stack :"<<st1.pop2()<<endl;
	cout<<"element is popped  out from first stack :"<<st.pop1();
	
}
