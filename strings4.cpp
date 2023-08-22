#include<iostream>
#include<string>

using namespace std;

int main() {
	
	//11-find()
	
	string a = "hyeerrm";
	cout<<a.find("eer")<<endl;//3
	
	//12-insert()
	
	string b = "hyeerrm";
	cout<<a.insert(2, "choo")<<endl;
	
	
	//13-length
	
	string c = "hyeerrm";
	cout<<c.length()<<endl;//7
	
	//14-resize()
	
	string d = "hyeerrm";
	d.resize(6);
	cout << d <<endl;
	
	//15-size()
	
	string e = "hyeerrm";
	cout << e.size() <<endl;//7
	
	
	//16-substr()
	
	string f = "hyeerrm";
	cout << f.substr(3,4) <<endl;//errm
	
	//17-stoi()
	
	string g = "786";
	int x = stoi(g);
	cout << x+2 <<endl;
	
	
	
	
	return 0;
}
