#include<iostream>
#include<vector>
#include<queue>
#include<deque>
using namespace std;
 vector<long long> printFirstNegative(long long int A[],long long int N,long long int K){
 	deque<long long> dq;
 	vector<long long>ans;
 	for(int i=0;i<K;i++){
 		if(A[i]<0){
 			dq.push_back(i);
		 }
	 }
	 if(dq.size()>0){
	 	ans.push_back(A[dq.front()]);
	 }
	 else{
	 	ans.push_back(0);
	 }
	 
	 
	 for(int i=K;i<N;i++){
	 	if(!dq.empty() && (i-dq.front()>=K)){
	 		dq.pop_front();
		 }
		if(A[i]<0){
			dq.push_back(i);
		}
		if(dq.size()>0){
			ans.push_back(A[dq.front()]);
		}
		else{
			ans.push_back(0);
		} 
		 
		 
		 
	 	
	 }
	 
	 return ans;
 	
 	
 }
int main() {
    long long N;
    cout<<"enter the number of element ";
    cin >> N; // Assuming N is to be inputted by the user
    long long int arr[N]; // Variable Length Array (VLA) might not be supported by all compilers, consider using std::vector
    for(int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    cout<<"entr the window value :";
    long long K;
    cin >> K; // Assuming K is also inputted by the user
    vector<long long> ans = printFirstNegative(arr, N, K);
    for (size_t i = 0; i < ans.size(); ++i) {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}
