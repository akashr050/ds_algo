#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

void insertionSort(vector<int> &arr) {
	for(i = 1; i <arr.size();i++){
		toInsert = arr[i];
		for(j = i-1; arr[j] > arr[i];j--)
			arr[j+1] = arr[j];
			
	}
}