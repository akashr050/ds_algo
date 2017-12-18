#include <iostream>
#include <string>

using namespace std;


class myVector {
public:
	myVector(){
		arr = new string[10];
		numAllocated = 10;
		numUsed = 0;
	}	

	~myVector() {
		delete[] arr;	
	}	

	int size() {
		return numUsed;
	}
	
	void add(string s){
		if(numUsed == numAllocated){
			doubleCapacity();
		}		
		arr[numUsed++] = s;
	}

	string getAt(int index) {
		if(index < 0 || index > size())
			perror("Out of bounds");
		return arr[index];
	}
	int getnumUsed(){
		return numUsed;
	}	
	 
	int getnumAllocated(){
		return numAllocated;
	}	 

		

private:
	string *arr;
	int numUsed, numAllocated;	
	
	void doubleCapacity(){
	string *arr_new = new string[2 * numAllocated];
	for(int i = 0; i < numUsed; i++)
		arr_new[i] = arr[i];
	delete [] arr;
	arr = arr_new;
	numAllocated *= 2;
	}	
	
};


int main() {
	myVector v;
	v.add("akash");
	v.add("rastogi");
	v.add("akash");
	v.add("rastogi");
	v.add("akash");
	v.add("rastogi");
	v.add("akash");
	v.add("rastogi");
	v.add("akash");
	v.add("rastogi");
	v.add("akash");
	v.add("rastogi");
	
	
	v.getAt(3);
	for(int i = 0; i <v.size(); i++)
		cout<<v.getAt(i)<< " "; 	
	cout<<endl;
	return 0;
}

