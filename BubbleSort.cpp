#include <iostream>
#include <algorithm>

using namespace std;

void BubbleSort(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    int arr[5] = {3, 6, 10, 4, 14};
    
    BubbleSort(arr, 5);
    
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}

