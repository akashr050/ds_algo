#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <functional>
#include <vector>
#include <algorithm>

using namespace std;	

int main() {
	vector<int> v = {1, 2, 3, 4, 5, 6};
	
	for(auto i = v.begin(); i!= v.end(); i++){
		cout << *i <<" ";
	}
}