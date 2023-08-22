#include<iostream>
using namespace std;

//bubble sort using recursion
void sortArray(int *arr, int n) {
    // base case - already sorted
    if (n == 0 || n == 1) {
        return;
    }

    // Sort one element smaller array
    sortArray(arr, n - 1);

    // Place the last element at its correct position
    int lastElement = arr[n - 1];
    int j = n - 2;

    while (j >= 0 && arr[j] > lastElement) {
        arr[j + 1] = arr[j];
        j--;
    }

    arr[j + 1] = lastElement;
}

int main() {
    int arr[5] = {2, 5, 1, 6, 9};

    sortArray(arr, 5);

    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

