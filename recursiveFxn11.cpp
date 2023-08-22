#include <iostream>
using namespace std;

void print(int arr[], int n){
	cout << "size of array is "<<n<<endl;
	for(int i=0; i<n; i++) {
		cout << arr[i] <<" ";
	}cout<<endl;
}

bool linearSreach(int *arr, int size, int key) {
	print(arr,size);
	//base case
	if(size == 0)
	    return false;
	    
	 if(arr[0] > key)
	    return true;
	 
	else {
		bool remaingPart = linearSreach(arr+1, size-1, key);
		return remaingPart;	   
	} 
	
	
}

int main() {
	int arr[5] = {2,3,5,6,9};
	int size = 5;
	int key = 6;
	
	bool ans = linearSreach(arr,size,key);
	
	if(ans)
	   cout << "present"<<endl;
	else
	   cout << "Absent"<<endl;
	   
	return 0;
}

