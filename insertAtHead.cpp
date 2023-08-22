//Insert at Head
#include<iostream>
using namespace std;

class Node {
	public:
		int data;
		Node* next;
		
		//constructor
	Node(int data){
		
		this->data = data;
		this->next = NULL;
		
	}
	

};


void insertAtHead(Node* &head, int d) {
	
	//new node create
	Node* temp = new Node(d);
	temp -> next = head;
	head = temp;
	
}

void print(Node* &head) {
	
	
	if(head == NULL) {
		
	  cout << "List is Empty"<<endl;
	  return;
	  
	}
	
	while(head != NULL) 
	
	{
		 cout<<head->data<<"->";
		 head = head->next;
		 
		
	}	
	cout<<"NULL";
	
}

int main() {
	//created a new node
	
	Node* node1 = new Node(10);
	
//	cout << node1 -> data << endl;
//	cout << node1 -> next << endl;
	
	
	Node* head = node1;
	Node* tail = node1;


   	 insertAtHead(head,20);
     insertAtHead(head,30);
     insertAtHead(head,40);
	
	
  	print(head);
	
	
	return 0;
	
}
