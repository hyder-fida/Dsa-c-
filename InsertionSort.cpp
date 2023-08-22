#include<iostream>
using namespace std;

int insertionSort(int arr[], int n) {
	
	for(int i=1; i<n; i++) {
		
		int temp = arr[i];
	    int j;
		for( j=i-1; j>=0; j--) {
			
			  if(arr[j] > temp) {
			 	
				//shift
			    	arr[j+1] = arr[j];
				
			}
			
			else {
				
			 //ruk jao
			   break;
			   
         	}
         	    
		}
		
	arr[j+1] = temp;
	
	}
	
}

int main() {
	
    int arr[5] = {3, 6, 10, 4, 14};
    
    insertionSort(arr, 5);
    
    for (int i = 0; i < 5; i++) {
    	
        cout << arr[i] << " ";
        
    }
    
    return 0;
    
}
	
	
	

