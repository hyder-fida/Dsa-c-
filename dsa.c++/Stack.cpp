#include<iostream>
#include<stack>
using namespace std;

int main() {
	
	stack<string> s;
	
	s.push("Love");
	s.push("Babar");
	s.push("Kumar");
	
	//last-in-first-out(LIFO)
	
	cout<<"Top Element is-> "<<s.top()<<endl;//kumar
	
	s.pop();
	cout<<"Top Element is-> "<<s.top()<<endl;//babar
	
	cout<<"size of stack-> "<<s.size()<<endl;//2
	
	cout<<"Empty or not-> "<<s.empty()<<endl;//0
	
	
	
}
