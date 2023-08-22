#include<iostream>
#include<string>

using namespace std;

int main() {
	
	string str = "hyder";
	cout<<str<<endl;//hyder
	
	string s[10];
	//it declares a string of size 10
	s[0] = "hyder";
	s[1] = "fida";
	s[1] = "hussain";
	for(int i=0; i<10; i++){
		
		cout<<s[i]<<endl;
	}
	
	   string A(5 , 'N');
  // It declares a string of size 5 with all characters ‘N’.
		cout<<A<<endl;
		
		string abc(str);
  // it declares the copy of string
		cout<<abc<<endl;

	

	return 0;
}
