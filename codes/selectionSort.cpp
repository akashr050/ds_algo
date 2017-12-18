#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

void selectionSort(vector<int> &arr) {
	
	for(int i = 0; i<arr.size();i++) {
		int minIndex = i;
		int min = arr[i];
		for(int j = i; j<arr.size();j++) {
			if(arr[j] < min){
				min = arr[j];
				minIndex = j;
			}
		}	
		int temp = arr[minIndex];
		arr[minIndex] = arr[i];
		arr[i] = temp;
	}
}

void printVector(vector<int> &arr) {
	for(int i = 0; i<arr.size();i++)
		cout<< arr[i]<<" ";
	cout<<endl;
}

int main() {
	vector<int> v {1, 4, 3, 5, 7, 2, -2, 8};
	selectionSort(v);
	printVector(v);	
}