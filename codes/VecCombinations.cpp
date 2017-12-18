#include <string>
#include <vector>
#include <iostream>

using namespace std;
void VecComb(string soFar, string rest, vector<string> &sList) {
	if(rest.length() == 0)
		sList.push_back(soFar);
	else{
		VecComb(soFar + rest[0], rest.substr(1), sList);
		VecComb(soFar, rest.substr(1), sList);
	}
}
int main(){
	string s = "aksh"; 
	vector<string> sl;
	VecComb("", s, sl);
	for(auto i = sl.begin(); i!= sl.end();i++){
		cout<<*i<<" ";	
	}
	cout<<sl.size()<<endl;
}