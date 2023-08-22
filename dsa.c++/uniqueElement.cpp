#include<iostream>
using namespace std;

int findUnique(int arr[], int n) {
	
	int ans = 0;
	
	for(int i=0; i<n; i++) {
		
		ans = ans^arr[i];
		
	}
	
	return ans;
	
}

int main() {
	
	int arr[5] = {21,33,21,33,44};
	
	cout <<findUnique(arr, 5);
	
}

