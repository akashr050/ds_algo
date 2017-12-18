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

void insertionSort(vector<int> &arr) {
	int j;
	for(int i = 1; i <arr.size();i++){
		int toInsert = arr[i];
		for(j = i-1; j>=0 && arr[j] > toInsert;j--)
			arr[j+1] = arr[j];
		arr[j+1] = toInsert;	
	}
}

void printVector(vector<int> &arr) {
	for(int i = 0; i<arr.size();i++)
		cout<< arr[i]<<" ";
	cout<<endl;
}

void merge2Array(vector<int> &v, vector<int> &arrLeft, vector<int> &arrRight) {
	int l1 = 0, r1 = 0, v1 = 0;
	
	while(l1 < arrLeft.size() && r1 < arrRight.size()) {
		if(arrLeft[l1] < arrRight[r1])	v[v1++] = arrLeft[l1++];
		else v[v1++] = arrRight[r1++];
	}
	while(l1 < arrLeft.size()) v[v1++] = arrLeft[l1++];
	while(r1 < arrRight.size()) v[v1++] = arrRight[r1++];	
}	

void mergeSort(vector<int> &arr) {
	if(arr.size() > 1){
		int midPoint = arr.size()/2;
		vector<int> arrLeft(arr.begin(), arr.begin()+midPoint);
		vector<int> arrRight(arr.begin() + midPoint, arr.end());
		mergeSort(arrLeft);
		mergeSort(arrRight);
		merge2Array(arr, arrLeft, arrRight);
	}
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
	if(arr[lh] >= pivot) return start;
	swap(arr[start], arr[lh]);
	return lh;
}	
 
void quickSort(vector<int> &arr, int start, int stop) {
	cout<<"asfasdfa ";
	if(stop > start){
	int pivot = partition(arr, start, stop);
	quickSort(arr, start, pivot);
	quickSort(arr, pivot+1, stop);
	}
}
 
int main() {
	vector<int> v {1, 4, 3, 5, 7, 2, -2, 8};
	quickSort(v, 0, v.size());
	printVector(v);	
}