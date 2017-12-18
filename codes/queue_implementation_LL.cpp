#include <string>
#include <iostream>
#include <vector>

using namespace std;
template <typename type>
class myQueue {
	public:
	myQueue(){
		head = tail = NULL;
	}
	
	~myQueue(){
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
	
	void enQueue(type e) {
		cellT* temp = new cellT;
		temp->val = e;
		temp->next = NULL;
		if(isEmpty())
			head = tail = temp;
		else{
		tail->next = temp;
		tail = temp;
		}
	}
	
	type deQueue() {
		if(isEmpty()) perror("Queue is empty");
		else {
			type front = head->val;
			head = head->next;
			return front;
		}	
	}	
	
	private:
	struct cellT {
		type val;
		cellT* next;	
	};	
	
	cellT* head = NULL;
	cellT* tail = NULL;
};	
int main() {
	myStack<char> c;
	c.enQueue(':');
	c.enQueue('[');
	cout<<c.isEmpty();
	cout<<c.deQueue();
	cout<<" "<<c.deQueue()<<endl;
	cout<<c.deQueue();
	return 0;
}