#include<iostream>
#include<stack>
using namespace std;
 bool retundantaPara(string s){
     stack<char> st;
     for(int i=0;i<s.length();i++){
         char ch = s[i];
         if(ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/'){
             st.push(ch);
         }
         else {
             if(ch == ')'){
                 bool retundant = true;
                 while(st.top() != '('){
                     char top = st.top();
                     if(top == '+'|| top == '-'|| top == '/'|| top == '*' ){
                         retundant = false;
                     }
                     st.pop();
                     
                 }
                 if(retundant == true){
                 return true;
                     
                 }
                 st.pop();
             }
         }
     }
     return false;
 }
 int main(){
    string s ="((a+b)*(c)";
    bool result = retundantaPara(s);
    if(result){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
 }
