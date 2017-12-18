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
			before.push(after.top());
			after.pop();
		}
		void moveCursorBackward() {
			after.push(before.top());
			before.pop();
		}
		void moveCursorToStart() {
			while(before.size() !=0){
				after.push(before.top());
				before.pop();
			}	
		}
		void moveCursorToEnd() {
			while(after.size() != 0){
				before.push(after.top());
				after.pop();
			}	
		}
		void insertCharacter(type s) {
			before.push(s);		
		}		
		void deleteCharacter(type s) {
			after.pop();
		}	
	private:
		stack<type> before, after;

}


int main() {
}	