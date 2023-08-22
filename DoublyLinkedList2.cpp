#include<iostream>
using namespace std;

class Node {
	
	public:
		int data;
		Node* prev;
		Node* next;		
		
	Node(int d) {
		
		this -> data = d;
		this -> prev = NULL;
		this -> next = NULL;
		
	}
	
	~Node() {
		
		int val = this -> data;
		if(next != NULL) {
			delete next;
			next = NULL;
		}
		
		cout <<"memory is freed for "<< val <<endl;
	}
	
};

//traversing a linked list

void print(Node* &head) {
	
	Node* temp = head;
	
	while(temp != NULL) {
		
		cout <<temp -> data <<"->";
		
	}
	
	cout<<"NULL" <<endl;
	
}

//gives lenght of linked list

int getLength(Node* &head) {
	
	int len = 0;
    Node* temp  = head ;
    while(temp != NULL) {
    	len++;
    	temp = temp -> next;
	}
	
	return len;
	
}

void insertAtHead(Node* &tail, Node* &head, int d){
	
	//empty list
	if(head == NULL) {
		
		Node* temp = new Node(d);
		head = temp;
		tail = temp;
		
	}
	
	else
	{
		Node* temp = new Node(d);
		temp -> next = head;
		temp -> prev = temp;
		head = temp;
	}
	
}

void insertAtTail(Node* &tail, Node* &head, int d ) {
	
	if(tail == NULL) {
		
		Node* temp = new Node(d);
		tail = temp;
		head = temp;
		
	}
	
	else 
	{
		Node* temp = new Node(d);
		tail -> next = temp;
		temp -> next = tail;
		tail = temp;
		
	}
	
}

void insertAtPosition(Node* &tail, Node* &head, int position, int d) {
	//insert at head
	if(position == 1) {
		
		insertAtHead(tail,head,d);
		return;
		
	}
	
	Node* temp = head;
	int cnt = 1;
	
	while(cnt < position-1) {
		temp = temp -> next;
		cnt++;
	}
	
	//inserting  at last position
	
	if(temp ->  next == NULL) {
		
		insertAtTail(tail,head,d);
		return;
		
	}
	
	//creating a node d
	Node* nodeToInsert = new Node(d);
	
	nodeToInsert -> next = temp -> next;
	temp -> next -> prev = nodeToInsert;
	temp -> next = nodeToInsert;
	nodeToInsert -> prev = temp;
	
}
