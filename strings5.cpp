#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main() {
	
	//integer to string
	
	int x = 767;
	cout<< to_string(x) + "2" <<endl;//7682
	
	//sorting a string
	
	string s = "hyderfida";
	sort(s.begin(), s.end());
	cout <<  s <<endl; //addefhiry
	
	
	
	
	return 0;
}
