#include <iostream>
#include <string>


using namespace std;

template <typename T>
class myVector {
public:
	myVector(){
		arr = new T[10];
		numAllocated = 10;
		numUsed = 0;
	}	

	~myVector() {
		delete[] arr;	
	}	

	int size() {
		return numUsed;
	}
	
	void add(T s){
		if(numUsed == numAllocated){
			doubleCapacity();
		}		
		arr[numUsed++] = s;
	}

	T getAt(int index) {
		if(index < 0 || index >= size())
			cout<<"Out of bounds";
		return arr[index];
	}
	int getnumUsed(){
		return numUsed;
	}	
	 
	int getnumAllocated(){
		return numAllocated;
	}	 

	void setAt(int index, T s) {
		if(index < 0 || index >= size())
			cout<<"Out of bounds";
		else
			arr[index] = s;
	}	
	
	void insertAt(int index, T s) {
		if(index < 0 || index >= size())
			perror("Out of bounds");
		if(numUsed == numAllocated)
			doubleCapacity();
		for(int i = size()-1; i >= index; i--)
			arr[i+1] = arr[i];
		arr[index] = s;
		numUsed++;
	}		

private:
	T *arr;
	int numUsed, numAllocated;	
	
	void doubleCapacity(){
	T *arr_new = new T[2 * numAllocated];
	for(int i = 0; i < numUsed; i++)
		arr_new[i] = arr[i];
	delete [] arr;
	arr = arr_new;
	numAllocated *= 2;
	}	
	
};


int main() {
	myVector<string> v;
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
	
	myVector<int> a;
	a.add(1);
	a.add(2);
	a.add(3);
	a.setAt(0, 100);
	a.insertAt(0, 0);

	for(int i = 0; i <a.size(); i++)
		cout<<a.getAt(i)<< " "; 	
	cout<<endl;
	cout<<a.getAt(0) << endl;
	
	return 0;
}

