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
			if(rear == size)
				cout<<"Queue is full"<<endl;
		
			else{
				arr[rear] = data;
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
				return ans;
			}
			
		}
		
		int front(){
			if(rear == qfront)
			   return -1;
			 return arr[qfront];  
		}
		
	int Exit(){
		
	}
		
};

int main(){
	Queue queue(5);
	int n,m;
	
    	cout<<"1.Enqueue:"<<endl;
    	cout<<"2.Dequeue:"<<endl;
	    cout<<"3.Show Front:"<<endl;
	    cout<<"4.Exit:"<<endl;
	
	do{

	cin>>n;

	switch(n){
		case 1:
			cout<<"enter value for enqueue:"<<endl;
			cin>>n;
			queue.enqueue(n);
			    break;
		case 2:
			cout<<queue.dequeue();
			    break;
		case 3:
			cout<<queue.front();
				break;
		case 4:
			cout<<"Exitig.......";
			return 0;
			break;
		default:
			cout<<"invalid input";
				break;
	}
		
		
	}while(n != 4);
	
		
	
	
	
	
//	queue.enqueue(50);
//	queue.enqueue(90);
//	queue.enqueue(80);
	
//	cout<<"Top Element: "<<queue.front()<<endl;
//	
//	cout<<queue.dequeue()<<endl;
//	
//	cout<<"Top Element: "<<queue.front()<<endl;
	
	return 0;
}
