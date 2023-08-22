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

Node* kReverse(Node* &head, int k) {
    // base call
    if (head == NULL) {
        return NULL;
    }

    // steps 1: reverse first k nodes
    Node* next = NULL;
    Node* curr = head;
    Node* prev = NULL;
    int count = 0;

    while (curr != NULL && count < k) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }

    // step 2: Recursion
    if (next != NULL) {
        head->next = kReverse(next, k);
    }

    // step 3: return head of reversed list
    return prev;
}

void print(Node* head) {
    if (head == NULL)
        return;

    Node* temp = head;

    while (temp != NULL) {
        cout << temp->data << "->";
        temp = temp->next;
    }

    cout << "NULL" << endl;
}

int main() {
	
    Node* node1 = new Node(10);
    Node* node2 = new Node(20);
    Node* node3 = new Node(30);
    Node* node4 = new Node(40);
    Node* node5 = new Node(50);

    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;

    cout << "Original List: ";
    print(node1);

    int k = 3;
    Node* newHead = kReverse(node1, k);

    cout << "Reversed List: ";
    print(newHead);

    return 0;
}

