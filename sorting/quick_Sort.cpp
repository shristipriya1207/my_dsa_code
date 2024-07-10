#include <iostream>
using namespace std;
int partition(int arr[],int low,int high){
	int pivot = arr[high];
	int i =low-1;
	for(int j = low;j<high;j++){
		if(arr[j]<pivot){
			i++;
			int temp = arr[j];
			arr[j]= arr[i];
			arr[i]=temp;
		}
	}
	i++;
	int temp= arr[i];
	arr[i]=pivot;
	arr[high]=temp;
	return i;
}


void quicksort(int arr[],int low,int high){
	if(low<high){
		int key = partition(arr,low,high);
		quicksort(arr,0,key-1);
		quicksort(arr,key+1,high);
	}
}

int main(){
	int arr[]={2,7,5,9,3,4};
	int n = sizeof(arr)/sizeof(arr[0]);
	quicksort(arr,0,n-1);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}

