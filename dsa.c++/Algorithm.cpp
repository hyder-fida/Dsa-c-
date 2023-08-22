#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main() {
	
	vector<int> v;
	
	v.push_back(1);
	v.push_back(3);
	v.push_back(6);
	v.push_back(7);
	
	cout<<"Finding 6->"<<binary_search(v.begin(),v.end(),6)<<endl;
	//if 1 then true means 6 is present n 0 means no
	
	cout<<"lower bound>"<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl;//2
    cout<<"upper bound>"<<upper_bound(v.begin(),v.end(),6)-v.begin()<<endl;//3
     
     int a = 3;
     int b = 5;
     
     cout<< "max->"<<max(a,b)<<endl;//5
     
     cout<< "min->"<<min(a,b)<<endl;//3
     
     swap(a,b);
     cout<<"a->"<<a<<endl;//5
     cout<<"b->"<<b<<endl;//3
     
     string abcd = "abcd";
     reverse(abcd.begin(),abcd.end());
     cout<<"String->"<<abcd<<endl;//dcba
     
     rotate(v.begin(),v.begin()+1,v.end());
     cout<<"after rotate"<<endl;
     for(int i:v) {
     	cout<<i<<" ";
	 }
     
     
     
     
	return 0;
}

