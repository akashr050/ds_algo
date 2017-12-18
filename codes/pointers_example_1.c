#include<stdio.h>
int sumOfElements(int A[], int size) {
	int sum, i;
	sum = 0;
	for(i = 0; i < size; i++) {
		sum +=A[i];
	}
	return sum;
}

void doub(int A[], int size) {
	int i;
	for(i = 0; i < size;i++){
		A[i] = A[i] * 2;
	}
}
	

int main() {
	int A[] = {1, 2, 3, 4, 5};
	int sum = sumOfElements(A, 5);
	int i;
	printf("%d \n", sum);
	doub(A, 5);
	sum = sumOfElements(A, 5);

	printf("%d \n", sum);
}