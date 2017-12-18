#include<stdio.h>
#include<stdlib.h>
int* add(int* a, int* b) {
	printf("%d \n", a);
	int *c = (int*)malloc(sizeof(int));
	*c = *a + *b;
	return c;
}

int main(){
	int x = 2, y = 4;
	int* z = add(&x, &y);
	printf("%d \n", &x);
	printf("sum = %d \n", *z);
}