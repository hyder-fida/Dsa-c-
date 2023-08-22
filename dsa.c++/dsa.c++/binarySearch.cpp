#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int key) {
	
	int start = 0;
	int end = n-1;
	int mid = (start+end)/2;
	
	while(start <= end) {
		
		if (arr[mid] == key) {
			
			return mid;
			//break;
			
		}
		
		else if(arr[mid] < key) 
			start = mid+1;
		
		else 
		   end = mid-1;
		   
		mid = (start+end)/2;
		
		return -1;
	}
		
}


int findPeak(int arr[], int n) {

    int s = 0, e = n-1;
    int mid = s + (e-s)/2;

    while(s < e) {
        //cout<<" s " << s <<" e " << e << endl;
        if(arr[mid] < arr[mid+1]){
            s = mid+1; 
        }
        else
            e = mid;
        
        mid = s + (e-s)/2;
    }
    return s;
}



int main() { 

    int even[6] = {2,4,6,8,12,18};
    int odd[5] = {3, 8, 11, 14, 16};

    int evenIndex = binarySearch(even, 6, 6);

    cout << " Index of 6 is " << evenIndex << endl;

    int oddIndex = binarySearch(odd, 5, 14);

    cout << " Index of 14 is " << oddIndex << endl;


   cout << " peak is " << findPeak( even, 6);



    return 0;
}

