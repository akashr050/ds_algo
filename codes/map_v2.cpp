#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <functional>

using namespace std;	

void foo(const map<int, string>& s){
	map<int, string>::const_iterator i = s.find(2);
	cout<<i->second;
}

int main() {
	map<int, string, greater<int> > m;
	m[1] = "one";
	m[2] = "two";
	m[0] = "zero";
	
	for(auto i = m.cbegin(); i!= m.cend(); i++){
		cout<<"("<<i->first<<" ,"<< i->second <<" )"<<endl;		
	}
	
}