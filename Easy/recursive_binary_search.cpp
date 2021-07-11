#include <stdio.h>
#include <iostream>
#include <climits>
using namespace std;

int binary_search(int arr[], int s, int e, int key)
	{
	if(s<=e){
		int mid = (s+e)/2;
		if(arr[mid]==key){
			return mid;
		}
		if(arr[mid]>=key){
			return binary_search(arr, s, mid+1, key);
		}
		else{
			return binary_search(arr, mid-1, e, key);
		}
	}
	return -1;
	}

int main() {
	int n;
	int key;
	cout<<"Enter the size of the array"<<endl;
	cin>>n;
	int arr[n];
	cout<<"Enter the elements of the array"<<endl;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"Enter key"<<endl;
	cin>>key;
	cout<<"Key found at index:"<<binary_search(arr, 0, n, key);	
	return 0;
}