#include<iostream>
#include<string>

using namespace std;

int main() {
	
	//Diffrent functions of string
	
	//1-Append() 
	string s1= "hyder ";
	string s2= "fida ";
	s1.append(s2);
	cout<<s1<<endl;//hyder fida
	
	//OR
	
	string a = "fam";
	string b = "ily ";
	cout<< a+b <<endl;//family
	
	
	//2-Assigns()
	
	string c = "babdd";
	c.assign("muhhh");
	cout<<c<<endl;//muhhh
	
	//OR
	
	string d = "babdd";
	c = "gannn";
	cout<<c<<endl;//gannn
	
	//3-at()
	
	string e = "babdd";
	cout<< e.at(3) <<endl;//d
	cout<< e[3] <<endl;//d
	
	//4.begin(): Returns an iterator pointing to the first character. Its time
    //complexity is O(1).
    
    //5-clear()
    
    string f = "nanono";
    f.clear();
    cout<<f<<endl;//clears everything
    
    //6-compare()
    
    string g = "hyder", h = "hyder";
    cout << g.compare(h) <<endl;//0
    
	//7-c_str(): Convert the string into C-style string (null terminated string) and
	//returns the pointer to the C-style string. Its time complexity is O(1).
	
	//8-c_str(): Convert the string into C-style string (null terminated string) and
	//returns the pointer to the C-style string. Its time complexity is O(1).
	
	
   //9-empty()
   
   string i = "jkfjdjfjh";
   i.clear();
   if(i.empty())
      cout<< "given string is empty" <<endl;
      
    //10-erase()
	
	string k = "jjsdjfjkdsb";
	k.erase(3,3);
	cout<< k <<endl;//jjsjkdsb

	return 0;
}
