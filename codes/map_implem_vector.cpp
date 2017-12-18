#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

template <typename type>
class myMap{
	public:
	myMap(){};
	~myMap(){};
	
	int findIndexForKey(string key){
		for(int i = 0;i<entries.size();i++){
			if(key == entries[i].key)
				return i; 
		}
		return -1;
	}	
	void add(string key, type val){
		int found = findIndexForKey(key);
		if(found != -1)
			entries[found].val = val;
		else{
		pairT temp;
		temp.val = val;
		temp.key = key;
		entries.push_back(temp);
		}
	}
	
	type getValue(string key){
		for(int i = 0; i <entries.size();i++){
			if(key == entries[i].key)
				return entries[i].val;	
		}	
		perror("key not found");
	}
	private:
	struct pairT {
		string key;
		type val;
	};	
	
	vector<pairT> entries;
};

int main() {
	myMap<int> m;
	m.add("car", 3);
	cout<< m.getValue("cr") << endl;
	return 0;
}	