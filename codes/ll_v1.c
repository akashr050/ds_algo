#include<stdio.h>
#include<stdlib.h>
struct Node {
	int data;
	struct Node* next;
};
struct Node* head;
void insert(int x) {
	struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
	(*temp).data = x;
	(*temp).next = head;
	head = temp;
}
void Print() {
	struct Node* temp = head;
	printf("List is :");
	while(temp != NULL) {
		printf("%d ", (*temp).data);
		temp = (*temp).next;
	}
}
int main(){
	head = NULL; // linked list is empty
	printf("How many numbers: ");
	int n, i, x;
	scanf("%d", &n);
	for(i = 0;i < n;i++) {
		printf("Enter the number: ");
		scanf("%d", &x);
		insert(x);
		Print();
		printf("\n");
	}
}