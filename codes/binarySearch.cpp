#include <iostream>
#include <string>
#include <vector>

using namespace std;
int BinarySearch(const vector<int> &v, int start, int end, int find){
	if(start == end){
		return -1;	
	}
	else{
		int mid = start + (end - start)/2;
		if(v[mid] == find)	return mid;
		else if(v[mid] <= find) return BinarySearch(v, mid+1, end, find);
		else return BinarySearch(v, start, mid, find);
	}
}

int main() {
	vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	cout<<BinarySearch(a, 0, 10, 6);
	
}