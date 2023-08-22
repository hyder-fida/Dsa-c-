#include<iostream>
#include<queue>
using namespace std;

int main() {
	
	//max heap
    priority_queue<int> maxi;
    
    //mini heap
    priority_queue<int,vector<int>,greater<int> > mini;
    
	
	maxi.push(1);
	maxi.push(2);
	maxi.push(3);
	maxi.push(0);
	
	cout<<"size->"<<maxi.size()<<endl;
	int n = maxi.size();
	
	for(int i=0; i<n; i++) {
		
		cout<<maxi.top()<<" ";
		maxi.pop();  //3,2,1,0;
		
	}cout<<endl;
	
	
	mini.push(5);
	mini.push(1);
	mini.push(0);
	mini.push(4);
	mini.push(3);
	
	cout<<"size->"<<mini.size()<<endl;
	int m = mini.size();
	
	for(int i=0; i<m; i++) {
		
		cout<<mini.top()<<" ";
	    mini.pop();  //0,1,3,4,5
		
	}cout<<endl;

  cout<<"khali ha kya?? "<<mini.empty()<<endl; //1
	
}
