#include<iostream> 
using namespace std;

int fibSeries(int n, int a=0, int b=1) {
     //base case
     if(n >= 1){
       cout<<a<<" ";
       int ans = fibSeries(n-1, b, a+b);
	 }
       
}

int main() {

    int n;
    cin >> n;
    
   cout <<"Fibonacci series upto: " << n <<endl;
   cout << fibSeries( n);


    return 0;
}

