#include <stdio.h>
#include <iostream>
#include <climits>
using namespace std;

int linearSearch(int arr[], int n, int key){
	for(int i=0;i<n;i++){
		if(arr[i]==key){
			return i;
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
	cout<<"Key found at index:"<<linearSearch(arr, n, key);	
	return 0;
}