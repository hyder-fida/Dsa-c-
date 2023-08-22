#include<iostream>
using namespace std;

class Queue {
    int *arr;
    int rear;
    int qfront;
    int size;
	
public:
    Queue(int n) {
        size = n;
        arr = new int[size];
        rear = 0;
        qfront = 0;
    }
	
    void enqueue(int data) {
        if (rear == size)
            cout << "Queue is full";
        else {
            arr[rear] = data;
            rear++;
        }
    }

    int dequeue() {
        if (qfront == rear || qfront >= size) 
            return -1;
            
         else {
         	
            int ans = arr[qfront];
            arr[qfront] = -1;
            qfront++;
            
            if (qfront == size) {
                qfront = 0;
                rear = 0;
            }
            
            return ans;
        }
        
    }	
  
    int front() {
        if (isEmpty())
            return -1;
        else
            return arr[qfront];
    }
  
    bool isEmpty() {
        return qfront == rear;
    }
};

int main() {
    Queue queue(5);
	
    queue.enqueue(29);
    queue.enqueue(45);
    queue.enqueue(25);
    cout << queue.front()<<endl;
    
    queue.dequeue();
    cout << queue.front()<<endl;
	
    return 0;
}

