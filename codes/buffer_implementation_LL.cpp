#include <vector>
#include <algorithm>
#include <stack>
#include <iostream>

using namespace std;

template <typename type>
class Buffer{
	public:
		Buffer(){};
		~Buffer(){};
		void moveCursorForward() {
			if(cursor != NULL)
				cursor = cursor->next;
		}
		void moveCursorBackward() {
			cellT* curr = head;
			if(cursor != NULL){
			while(curr->next != cursor){
				curr = curr->next;	
			}	
			cursor = curr;
			}
		}
		void moveCursorToStart() {
			cursor = head;
		}
		void moveCursorToEnd() {
			while(cursor->next != NULL){
				cursor = cursor->next;
			}	jkl
		}
		void insertCharacter(type s) {
			cellT* temp = new cellT;
			temp->ch = s;
			temp->next = cursor->next;
			cursor->next = temp;
			cursor = temp;
		}		
		void deleteCharacter(type s) {
			if(cursor->next != NULL){
				cellT* toDelete = cursor->next;
				cursor->next = toDelete->next;
				delete toDelete;
			}
		}	
	private:
		struct cellT{
			type ch;
			cellT* next;
		}	
		struct* head, *tail, *cursor;

}


int main() {
}	