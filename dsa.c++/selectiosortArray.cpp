#include<iostream> 
using namespace std;

//int selectionSort(int arr[], int n) {
//	for(int i=0; i<n; i++) {
//		int minIndex = i;
//		
//		for(int j=i+1; j<n; j++) {
//		    if(arr[minIndex] > arr[j])
//		       	minIndex = j;
//		        
//		}
//
//		swap(arr[minIndex], arr[i]);
//	}
//	
//}



void SelectionSort(int arr[], int n) {
	for(int i=0; i<n; i++) {
		for(int j=i+1; j<n; j++) {
			if(arr[i] > arr[j]){
			int	temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
		
}

int main() {
	
	int arr[5] = {22,45,10,23,55};
	
    SelectionSort(arr, 5);
   
	for(int i=0; i<5; i++) {
		
			cout << arr[i] <<endl;
			
		}
		return 0;
}
