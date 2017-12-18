#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;


void printVector(vector<int> &arr) {
	for(int i = 0; i<arr.size();i++)
		cout<< arr[i]<<" ";
	cout<<endl;
}

void swap(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
}	

int partition(vector<int> &arr, int start, int stop) {
	int pivot = arr[start];
	int lh = start+1, rh = stop - 1;
	while(true){
		while(lh < rh && arr[lh] < pivot) lh++;
		while(rh > lh && arr[rh] >= pivot) rh--;
		if(lh == rh) break;
		swap(arr[lh], arr[rh]);	
	}	
	if(lh == (start+1)) return start;
	else{
		swap(arr[start], arr[lh]);
		return lh;
	}	
}	
 
void quickSort(vector<int> &arr, int start, int stop) {
	int pivot = partition(arr, start, stop);
	if(stop-1 > start){
	int pivot = partition(arr, start, stop);
	quickSort(arr, start, pivot);
	quickSort(arr, pivot+1, stop);
	}
}
 
int main() {
	vector<int> v {1, 4, 3, 5, 7, 2, -2, 8};
	cout<<"as"<<v.size();
	quickSort(v, 0, v.size());
	printVector(v);	
	}