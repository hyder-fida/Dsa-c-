#include<iostream>
using namespace std;

void rotateArray(int arr[], int n, int k){
	
	int i, temp[10];
	
	for( i=0; i<n; i++) {
		
	temp[(i+k)%n] = arr[i];
		
	}
	
	 arr = temp;
	 
	 	
	for( i=0; i<n; i++) {
		
	cout<<arr[i] <<" ";
		
	}
	 
}
int main() {
	
	int arr[5] = {10,32,14,56,11};
	
	int i , temp[10];
	
	rotateArray(arr, 5, 2); //56,11,10,32,14
	
	return 0;
}
