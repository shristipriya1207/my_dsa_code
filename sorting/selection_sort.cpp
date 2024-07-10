#include <iostream>
using namespace std;
int main(){

int arr [6] = { 7,4,9,1,3,5};
int n = sizeof(arr)/sizeof(arr[0]);
for(int i=0;i<n-1;i++){
	int min =i;
	for(int j=i+1;j<n;j++){
		if(arr[min]>arr[j]){
			min =j;
		}
	}
	int temp = arr[min];
arr[min]= arr[i];
arr[i]=temp;	
}

for(int i=0;i<n;i++){
	cout<<arr[i]<<" ";
}
}

