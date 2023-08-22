#include <iostream>
using namespace std;

void print(int arr[], int s, int e){
	cout<<endl;
	for(int i=s; i<e; i++) {
		cout << arr[i] <<" ";
	}cout<<endl;
}


bool binarySearch(int *arr, int s, int e, int k) {
   print( arr, s, e);
    // base case
    // element not found
    if (s > e)
        return false;

    int mid = s + (e - s) / 2;

    // element found
    if (arr[mid] == k)
        return true;

    if (arr[mid] < k)
        return binarySearch(arr, mid + 1, e, k);
    else {
        return binarySearch(arr, s, mid - 1, k);
    }
}

int main() {
    int arr[11]= {2, 4, 6, 12, 16,33,56,89,331,444};
    int size = 11;
    int key = 444;

    bool ans = binarySearch(arr, 0, size - 1, key);

    if (ans)
        cout << "Present" << endl;
    else
        cout << "Absent" << endl;

    return 0;
}

