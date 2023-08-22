#include<iostream>
using namespace std;

int firstOcc(int arr[], int n, int key) {

    int s = 0, e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    
    while(s <=e ) {

        if(arr[mid] == key){
            ans = mid;
            e = mid - 1;
        }
        
        else if(key > arr[mid]) {//Right me jao
            s = mid + 1;
        }
        
        else if(key < arr[mid]) {//left me jao
            e = mid - 1;
        }

        mid = s + (e-s)/2;
    }
    return ans;
}

int lastOcc(int arr[],int n, int key) {

    int s = 0, e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    
    while(s <=e ) {

        if(arr[mid] == key){
            ans = mid;
            s = mid + 1;
        }
        
        else if(key > arr[mid]) {//Right me jao
            s = mid + 1;
        }
        
        else if(key < arr[mid]) {//left me jao
            e = mid - 1;
        }

        mid = s + (e-s)/2;
    }
    
    return ans;
}

int main() {
	
	int arr[6] = {8,55,44,48,55,90};
	
	cout<<firstOcc(arr,6,55)<<endl;
	
	cout<<lastOcc(arr,6,55)<<endl;
	
}
