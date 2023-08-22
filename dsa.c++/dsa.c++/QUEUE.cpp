#include<iostream>
#include<queue>
using namespace std;

int main() {
	
    queue<string> q;
	
	q.push("Love");
	q.push("Babar");
	q.push("Kumar");
	
	//ist-in-1st-out(FIFO)
	
	cout<<"Size before pop->"<<q.size()<<endl;
	cout<<"ist element is-> "<<q.front()<<endl;//love
	q.pop();
	cout<<"ist element is-> "<<q.front()<<endl;//babar
	cout<<"Size after pop->"<<q.size()<<endl;


	
}
