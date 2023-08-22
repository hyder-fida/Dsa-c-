#include<iostream>
using namespace std;

class Node {
	
public:
	
    int data;
    Node* next;

    Node(int d) {
    	
        this->data = d;
        this->next = NULL;
        
    }
    
};

void insertAtTail(Node* &tail, int d) {
	
    Node* temp = new Node(d);
    if (tail == NULL) {
        tail = temp;
        return;
        
    }
    
    tail->next = temp;
    tail = temp;
}

void print(Node* head) {
    if (head == NULL) {
        cout << "List is Empty" << endl;
        return;
    }
    while (head != NULL) {
        cout << head->data << "->";
        head = head->next;
    }
    cout << "NULL";
}

int main() {
	
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;

    insertAtTail(tail, 13);

    print(head);

    return 0;
    
}

