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
	}	
	void add(string key, type val){
		treeEnter(root, key, val);
	}
	
	type getValue(string key){
		node *found = treeSearch(root, key);
		if(found != NULL)
			return found->value;
		perror("Key does not exist");
	}
	private:
	struct node{
		string key;
		type val;
		node *left, *right;
	};
	node* root;
	
	node *treeSearch(node* t, string key){
		if(t == NULL)
			return NULL;
		else if(key > t->key)
			return treeSearch(t->right, key);
		else if(key < t->key)
			return treeSearch(t->left, key);
		else
			return t;
	}	
	void treeEnter(node *&t, string key, type val){
		if(t == NULL){
			t = new node;
			t->key = key;
			t->left = NULL;
			t->right = NULL;
		}
		else if(key < t->key)
			treeEnter(t->left, key, val);
		else if(key > t->key)
			treeEnter(t->right, key, val);
		else t->val = val;
	}
};

int main() {

	return 0;
}	