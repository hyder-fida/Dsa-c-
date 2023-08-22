//creating a single Linked List,

#include<iostream>
using namespace std;

class Node {	
	public:
		int data;
		Node* next;
			
};

void print(Node* &head) {
	
	while(head != NULL) 
	
	{
		 cout<<head->data<<endl;
		 head = head->next;
		
		
	}	
	
}

int main() {
	
	Node* node1 = new Node();
	node1->data = 10;
	
	Node* node2 = new Node();
	
	node2->data = 20;
	node1->next = node2;
	
	Node* node3 = new Node();
	
    node3->data = 30;
    node2->next = node3;
	
	Node* node4 = new Node();
	
	node4->data = 40;
	node3->next = node4;
	
	Node* node5 = new Node();
	
	node5->data = 50;
	node4->next = node5;
	
	node5->next = NULL;
	
	print(node1);
	
	return 0;
	
	
}







