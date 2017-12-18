#include "myVector.h"
#include <string>

using namespace std;
myVector::myVector(){
	arr = new string[10];
	numAllocated = 10;
	numUsed = 0;
}	

myVector::~myVector() {
	delete[] arr;	
}	

myVector::size() {
	return numUsed;
}

myVector::add(string s) {
	if(numUsed <= numAllocated)
		arr[numUsed++] = s;
	else {
		arr_new = new string[numUsed * 2];
//		for(i = 0; i <= numUsed; i++) {
//		}	
	}
}	

myVector::getAt(int index) {
	if(index < 0 || index > size())
		Error("Out of bounds");
	return arr[index];
}	