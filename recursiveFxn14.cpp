#include<iostream>
using namespace std;

bool checkPailindrome(string &str, int i, int j) {
	
	//base case
	if(i>j) 
	   return true;
	   
	if(str[i] != str[j])
	    return false;
	else {
		//recursive call
		return  checkPailindrome(str, i+1, j-1);
	}
	
	
}
int main() {
	string name = "ababa";
	cout<<endl;
	
	bool isPailindrome = checkPailindrome(name,0,name.length()-1);
	if(isPailindrome) {
		cout<<"its pailindrome"<<endl;
	}else{
		cout<<"its not pailindrome"<<endl;
	}

	return 0;
}
