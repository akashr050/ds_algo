#include<stdio.h>
#include<string.h>

void print(char* A) {
	int i = 0;
	while(A[i] != '\0'){
		printf("%c", A[i]);
		i++;
	}
	printf(" \n");
}
int main() {
	char C[10] = "John";
	printf("%s ", C);
	int len = strlen(C);
	printf("%d \n", len);
	print(C);
}