#include<iostream>
#include<queue>
#include<stack>
using namespace std;

queue<int> reverse (queue<int> q,int k){
	stack<int> s;
	for(int i=0;i<k;i++){
		int val = q.front();
		q.pop();
		s.push(val);
	}
	
	while(!s.empty()){
		int val = s.top();
		s.pop();
		q.push(val);
	}
	
	int t = q.size()-k;
	while(t--){
		int val = q.front();
		q.pop();
		q.push(val);
	}
	return q;
	
}
int main(){

queue<int> q;
    
    // Inserting elements in the queue
    for (int i = 1; i <= 5; ++i) {
        q.push(i);
    }

    // Displaying the original queue
    cout << "Original queue: ";
    queue<int> temp = q; // Copying the original queue to a temporary queue for display
    while (!temp.empty()) {
        cout << temp.front() << " ";
        temp.pop();
    }
    cout << "\n";

    // Reversing the queue
    q = reverse(q,4);

    // Displaying the reversed queue
    cout << "Reversed queue: ";
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << "\n";

    return 0;
}
