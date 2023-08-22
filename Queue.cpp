#include<iostream>
using namespace std;

class Queue {
	
    int* arr;
    int qfront;
    int rear;
    int size;

  public:
  	
    Queue() {
        size = 5;
        arr = new int[size];
        qfront = 0;
        rear = 0;
    }


    bool isEmpty() {
    	
        if (qfront == rear) 
            return true;
        
            return false;
        
    }

    void enqueue(int data) {
        if (rear == size) 
            cout << "Queue is full" << endl;
        
        else {
        	
            arr[rear] = data;
            rear++;
        }
    }

    int dequeue() {
    	
        if (qfront == rear) 
            return -1;
        
        else {
        	
           int ans = arr[qfront];
            arr[qfront] = -1;
            qfront++;
            
            if (qfront == rear) {
                qfront = 0;
                rear = 0;
            }
            
            return ans;
        }
        
    }

    int front() {
    	
        if (qfront == rear) 
        
            return -1;
    
            return arr[qfront];
        
    }

    void getQueue() {
        for (int i = qfront; i < rear; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    
};

int main() {
	
    Queue queue;
    
    queue.enqueue(10);
    queue.enqueue(20);
    queue.enqueue(30);
    queue.enqueue(40);
    queue.enqueue(50);
    
    
    queue.getQueue();
    cout << "1st Element: " << queue.front() << endl;
    
    queue.dequeue();
    queue.getQueue();
    cout << "1st Element: " << queue.front() << endl;
    
}

