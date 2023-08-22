#include<iostream>
using namespace std;

class Node{
	public:
		int data;
		Node* next;

	Node(int d){
		this -> data = d;
		this -> next = NULL;
	}
	
	~Node(){		
	
		int value = this -> data;
		if(this -> next != NULL){
			delete next;
			this -> next = NULL;
		}
		cout << "Memory is free for Node with data: "<<value<<endl;
	}
};

void inserAtHead(Node* &head, int d){
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

void print(Node* &head){
	Node* temp = head;
	if(head == NULL){
		cout<<"List is empty"<<endl;
	}
	else{
		cout<<temp->data<<"->";
		temp = temp -> next;
	}
	cout<<"NULL";
	
}

int main(){
     Node* node1 = new Node(10);
	 Node* head = node1;
	 Node* tail = node1;
	
     insertAtHead(head,20);
     insertAtHead(head,30);
     insertAtHead(head,40);
	
	print(node1);
	
	return 0;
}
