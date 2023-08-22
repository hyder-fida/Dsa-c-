#include<iostream>
using namespace std;

class Queue{
	
	int *arr;
	int size;
	int rear;
	int qfront;
	
	public:
		Queue(int n){
			size = n;
			arr = new int[size];
			rear = 0;
			qfront = 0;

		}
		
		void enqueue(int data){
			if(rear == qfront)
				cout<<"Queue is full"<<endl;
		
			else{
				arr[rear] == data;
				rear++;
			}
		}
		
		int dequeue(){
			if(qfront == rear || qfront >= size)
			  return -1;
			else{
				int ans = arr[qfront];
				arr[qfront] = -1;
				qfront++;
			}
		}
		
		int front(){
			if(rear == qfront)
			   return -1;
			 return arr[qfront];  
		}
		
};

int main(){
	Queue queue(5);
	
	queue.enqueue(50);
	queue.enqueue(90);
	queue.enqueue(80);
	
	cout<<"Top Element: "<<queue.front()<<endl;
	
	cout<<queue.dequeue();
	
	return 0;
}
