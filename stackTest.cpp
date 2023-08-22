#include<iostream>
using namespace std;

class Stack {
	
	public:
	  int *arr;
	  int top;
	  int size;
	
	Stack(int size) {
		
		this -> size = size;
		arr = new int[size];
		top = -1;
		
	}
	
	void push(int element) {
		
		if(size - top > -1) {
			top++;
			arr[top] = element;
		}
	else
		cout<<"Stack is full,stack overflow"<<endl;
				
	}
	
	void pop() {
		
		if(size >= 0){
			top--;
		}
		
		cout<<"Stack is empty,stack underflow"<<endl;
	
	}
	
	
	int peek() {
		
		if(top > -1) 
			return arr[top];
		else {
			cout << "stack is empty"<<endl;
			return -1;
		}
		
	}
	
	
	bool isEmpty() {
		
		if(top == -1)
		   return true;
		   return false;
	}
	
};


int main() {
	
	Stack st(5);
	
	st.push(10);
	st.push(20);
	st.push(30);
	st.push(40);
	st.push(50);
	st.push(60);
   	st.push(70);
	st.push(89);
	
	cout << "Peak Element: "<<st.peek()<<endl;
	
	st.pop();
	cout << "Peak Element: "<<st.peek()<<endl;
	
	
	return 0;
	
}
