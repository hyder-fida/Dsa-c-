#include<iostream>
using namespace std;

const int MAX_SIZE = 100; // Maximum size of the stack

class Stack {
	
    int top; // Index of the top element
    int stackArray[MAX_SIZE]; // Array to store the stack elements

public:
    Stack() {
        top = -1; // Initialize top as -1 to indicate an empty stack
    }

    void push(int data) {
        if (top == MAX_SIZE - 1) {
            cout << "Stack Overflow: Cannot push element, stack is full" << endl;
            return;
        }
        top++;
        stackArray[top] = data; // Add the element to the top of the stack
    }

    void pop() {
        if (top == -1) {
            cout << "Stack Underflow: Cannot pop element, stack is empty" << endl;
            return;
        }
        top--; // Decrement the top index to remove the top element
    }

    int topElement() {
        if (top == -1) {
            cout << "Stack is empty" << endl;
            return -1;
        }
        return stackArray[top]; // Return the top element without modifying the stack
    }

    bool isEmpty() {
    	
        return (top == -1); // Return true if the stack is empty, false otherwise
    }
};

int main() {
	
    Stack stack;

    stack.push(10);
    stack.push(30);

    cout << "Top element: " << stack.topElement() << endl;

//    stack.pop();
//
//    cout << "Top element after pop: " << stack.topElement() << endl;

    return 0;
    
}

