#include<iostream>
#include<vector>
using namespace std;

int main() {
	
	vector<int> a(5,1);
	cout<<"print a"<<endl;
	int n = a.size();
	
	for(int i = 0; i < n; i++) {
		cout<<a[i]<<" ";
	}cout<<endl;
	
	vector<int> last(a);
	cout<<"print last"<<endl;

	for(int i = 0; i < n; i++) {
		cout<<last[i]<<" ";
	}cout<<endl;
	
	
	
	vector<int> v;
	cout << "capacity->"<<v.capacity()<<endl;//0
	
	v.push_back(1);
	cout << "capacity->"<<v.capacity()<<endl;//1
	
	v.push_back(2);
	cout << "capacity->"<<v.capacity()<<endl;//2
	
	v.push_back(3);
	cout << "capacity->"<<v.capacity()<<endl;//4
	
	cout << "Size->"<<v.size()<<endl;//3 
    
    cout<<"Element at index 2nd is->"<<v.at(2)<<endl;//3
    
    cout<<"First Element->"<<v.front()<<endl;
	
	cout<<"last Element->"<<v.back()<<endl;
	
	cout <<"Before pop"<<endl;
	int size = v.size();
	for (int i = 0; i < size; i++) {
        cout<<v[i]<<" "; //1,2,3,
    }cout<<endl;
    
    v.pop_back();
    
    cout<<"After pop"<<endl;
    for (int i = 0; i < size; i++) {
        cout<<v[i]<<" ";  //1,2
    }cout<<endl;
    
    cout<<"before clear size "<<v.size()<<endl;
    v.clear();
    cout<<"after clear size "<<v.size()<<endl;
    
   
}
