#include<iostream>
#include<map>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtPosition(Node* &tail, Node* &head, int position, int d) {
    // Insert at start
    if (position == 1) {
        Node* temp = new Node(d);
        temp->next = head;
        head = temp;
        return;
    }

    Node* temp = head;
    int cnt = 1;

    while (cnt < position - 1) {
        temp = temp->next;
        cnt++;
    }

    // Inserting at Last Postion
    if (temp->next == NULL) {
        Node* newNode = new Node(d);
        if (tail == NULL) {
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
    }

    // Creating a node for d
    Node* nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

void print(Node* head) {
    if (head == NULL) {
        cout << "List is empty" << endl;
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

    insertAtPosition(tail, head, 2, 20);
    insertAtPosition(tail, head, 3, 30);

    print(head);

    return 0;
}

