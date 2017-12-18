#include <string>
#include <iostream>
#include <vector>

using namespace std;
template <typename type>
class myStack {
	public:
	myStack(){};
	~myStack(){};
	
	int size() {
		return arr.size();
	}	
	
	void push(type e) {
		arr.push_back(e);	
	}
	
	type pop() {
		if(size() == 0)
			perror("Stack is empty"); 
		type top = arr[size() - 1];
		arr.erase(arr.begin()+size() - 1);
		return top;
	}	
	
	private:
	vector<type> arr;
};	
int main() {
	myStack<char> c;
	c.push(':');
	c.push('[');
	cout<<c.size();
	cout<<c.pop();
	cout<<" "<<c.pop()<<endl;
	cout<<c.pop();
	return 0;
}