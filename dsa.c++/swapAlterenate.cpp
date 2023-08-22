#include<iostream>
using namespace std;

void printArray(int arr[], int n) {
	
	for(int i=0; i<n; i++) {
		
		cout <<arr[i] <<" ";
		
	}cout <<endl;
	
} 

void SwapAlternate(int arr[], int n) {
	
	for(int i=0; i<n; i+=2) {
		
		if(i+1 < n) {
			
			swap(arr[i],arr[i+1]);
			
		}
	}
		
}

int main() {
	int even[8] = {5,2,9,4,7,6,1,0};
	int odd[8] = {11,33,9,76,43};
	
	SwapAlternate(even,8);
	SwapAlternate(odd,5);
	
	printArray(even,8);
	cout<<endl;
	printArray(odd,5);

    return 0;
}
