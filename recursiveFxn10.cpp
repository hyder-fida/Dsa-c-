#include <iostream>
using namespace std;

int getSum(int *arr, int size) {
	//base case
	if(size == 0)
	    return 0;
	 
	 int remaingPart = getSum(arr+1, size-1); 
	  
	  int sum  = arr[0] + remaingPart;
	
	  return sum;
}

int main() {
	int arr[5] = {2,3,5,6,9};
	int size = 5;
	
	int sum = getSum(arr,size);
	
	cout<<"sum is: "<< sum;
	
}
