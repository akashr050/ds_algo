#include <string>
#include <iostream>
#include <vector>

using namespace std;

void VecPerm(string soFar, string rest, vector<string> &sList){
	if(rest.length() == 0)
		sList.push_back(soFar);
	else{
		for(int i =0; i < rest.length();i++){
			string temp = rest;
			VecPerm(soFar + rest[i], temp.erase(i,1), sList);
		}
	}
}

int main(){
	vector<string> sList;
	string a = "akash";
	VecPerm("", a, sList);
	for(auto i = sList.begin(); i!=sList.end();i++){
	cout<< *i <<" ";
	}
	cout<<sList.size();
}