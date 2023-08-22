#include<iostream>
#include<list>
using namespace std;

int main() {
	list<int> l;
	
	l.push_back(1);
	l.push_front(2);
	cout<<"size of list L is "<<l.size()<<endl;//2
	
//	for(int i:l) {
//		cout<<i<<" ";
//	}
	 //Using an iterator to traverse the list
      list<int>::iterator it;
    for (it = l.begin(); it != l.end(); ++it) {
        cout << *it << " "; //2,1
    }
    cout<<endl;
    
    l.erase(l.begin());
    cout<<"after erase "<<endl;
    for (it = l.begin(); it != l.end(); ++it) {
        cout << *it << " "; //1
    }
    cout<<endl;
    
    //printing five elements with value 100
    
    list<int>n(5,100);
	
    cout<<"Printing n"<<endl;
    for (it = n.begin(); it != n.end(); ++it) {
        cout << *it << " "; //100,100,100,100,100
    }
    cout<<endl;

}
