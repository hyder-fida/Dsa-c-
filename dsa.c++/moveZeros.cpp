#include<iostream>

using namespace std;

void moveZeros(int arr[],int n) {
	int i = 0;
	n = arr.size();
	for(int j = 0; j<n; j++ ) {
		if(arr[j] != 0) {
			swap(arr[j], arr[i]);
			i++;
		}
	}	
	
}


void print(int ans[], int n) {
		
		for(int i = 0; i<n; i++) 
		
			 cout << ans[i] <<" ";
			
    	cout << endl;
	
}


int main() {
	
	int arr[5] = {0,1,0,3,12};
	moveZeros(arr, 5);
	
	print(arr, 5);
}
