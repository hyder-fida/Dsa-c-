#include<iostream>
using namespace std;

void findIntersection(int arr1[], int n,int arr2[], int m) {
	int result[10] = {0};
	int ans = 0;
	
	  for(int i=0; i<n; i++) {
	  	
	  	 for(int j=0; j<m; j++) {
	  	 	
	  	 	if(arr1[i] == arr2[j]) {
	  	 		
	  	 		 result[ans] = arr1[i];
	  	 		 ans++;
	  	 		  break;
	  	 		 
			   }
		   }
		   
	  }
	
	 cout <<"Intersection of two Arrays"<<endl;
      for(int i=0; i<ans; i++) {
     	
     	 cout << result[i] <<endl;
     	
	 }
	
}

int main() {
	
	int arr1[5] = {21,10,10,34,77};
	int arr2[5] = {11,10,10,21,77};
   
    findIntersection(arr1, 5, arr2, 5);
	
	
}

