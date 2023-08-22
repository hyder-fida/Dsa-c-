#include<iostream>
using namespace std;

//finding power to the base
int power(int n){
	//base class
	if(n == 0)
	  return 1;
	  
	  //recursive relation
	  
//	  int smallerProblem = power(n-1);
//	  int biggerProblem = 2 * smallerProblem;
//	  return biggerProblem;
	return 2 * power(n-1);
	
}

int main(){
	
	int n;
	cin >> n;
	
	int ans = power(n);
	
	cout<<ans;
	
	return 0;
}
