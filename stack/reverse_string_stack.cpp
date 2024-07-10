#include<iostream>
using namespace std;
class stack {
	int top;
	char *arr;
	int size;
	public:
	stack(int size)
	{
		this->size= size;
		top=-1;
		arr= new char[size];
		
	}
	void push(char chh){
	top++;
			arr[top] =chh;
//			cout<<arr[top];
		
	}
	char pop(){
		char ch1 =arr[top];
		top--;
		return ch1;
	}
	
	
};
int main(){
	string name;
	cout<<"enter the string :";
	cin>>name;
	int s= name.length();
	stack st(s);
	for(int i=0;i<s ;i++){
		char ch = name[i];
		st.push(ch);
	}
	for(int i=0;i<s;i++){
		char ch2= st.pop();
		cout<<ch2;
	}
	
//	st.push(name);
}
