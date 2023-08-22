#include<iostream>
using namespace std;

//int findDuplicate(int arr[], int n) 
//{
//    int ans = 0;
//    
//    //XOR ing all array elements
//    for(int i = 0; i<n; i++ ) {
//    	ans = ans^arr[i];
//    }
//	
//    //XOR [1, n-1]
//    for(int i = 1; i<n; i++ ) {
//    	ans = ans^i;
//    }
//    return ans;
//}
//
//int main() {
//	
//	int arr[5] = {21,45,27,78,211};
//	
//	cout << findDuplicate(arr, 5);
//	
//}



void findDuplicates(int arr[], int size) {
    cout <<"Duplicates: " ;
    
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                printf("%d ", arr[i]);
                break;
            }
        }
    }
    
    cout <<endl;
}

int main() {
    int array[] = {1, 2, 3, 4, 2, 5, 6, 3, 7, 8, 1};
    int size = sizeof(array) / sizeof(array[0]);
    
    findDuplicates(array, size);
    
    return 0;
}

