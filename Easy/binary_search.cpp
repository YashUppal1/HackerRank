#include <stdio.h>
#include <iostream>
#include <climits>
using namespace std;

int binary_search(int arr[], int n, int key){
	int s=0;
	int e=n;
	while(s<=e){
		int mid = (s+e)/2;
		if(arr[mid]==key){
			return mid;
		}
		else if(arr[mid]<=key){
			s=mid+1;
		}
		else{
			e=mid-1;
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
	cout<<"Key found at index:"<<binary_search(arr, n, key);	
	return 0;
}