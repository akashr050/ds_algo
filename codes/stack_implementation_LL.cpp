#include <string>
#include <iostream>
#include <vector>

using namespace std;
template <typename type>
class myStack {
	public:
	myStack(){
	}
	~myStack(){
		cellT* temp, n;
		for(temp = head; temp != NULL;){
			cellT* n = temp->next;
			delete temp;
			temp = n;
		}	
	}
	
	bool isEmpty() {
		return head == NULL;
	}	
	
	void push(type e) {
		cellT* temp = new cellT;
		temp->val = e;
		temp->next = head;
		head = temp;
	}
	
	type pop() {
		if(isEmpty()) perror("Stack is empty");
		else {
			type top = head->val;
			head = head->next;
			return top;
		}	
	}	
	
	private:
	struct cellT {
		type val;
		cellT* next;	
	};	
	
	cellT* head = NULL;
};	
int main() {
	myStack<char> c;
	c.push(':');
	c.push('[');
	cout<<c.isEmpty();
	cout<<c.pop();
	cout<<" "<<c.pop()<<endl;
	cout<<c.pop();
	return 0;
}