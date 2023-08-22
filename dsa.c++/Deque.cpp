#include<iostream>
#include<deque>
using namespace std;

int main() {
	
	deque<int> d;
	
	d.push_back(1);
	d.push_front(2);
	
	cout<<"print first index element "<<d.at(1)<<endl;
	
	int n = d.size();
	for(int i=0; i<n; i++) {
		cout << d[i]<<" "; //2,1
	}
	
	d.pop_back();
	cout<<endl;
	for(int i=0; i<n; i++) {
		cout << d[i]<<" "; //2
	}
	
	//d.pop_front();
	cout<<endl;
	for(int i=0; i<n; i++) {
		cout << d[i]<<" "; //1
	} cout<<endl;
	
	cout<<"Empty or not "<<d.empty()<<endl; //1 means true
	
	cout<<"Before erase "<<d.size()<<endl;//2
	d.erase(d.begin(),d.begin()+1);
	cout<<"after erase "<<d.size()<<endl;//0
	
     	
   
	
}
