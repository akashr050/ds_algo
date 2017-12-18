#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* next;
};
struct node* head;
void insertn(int x, int n){
	int i;
	struct node* temp = head;
	for(i = 1; i<n-1 & (*temp).next != NULL ;i++) {
		temp = (*temp).next;
	}
	struct node* a = (struct node*)malloc(sizeof(struct node));
	(*a).next = (*temp).next;
	(*a).data = x;
	(*temp).next = a;
}
void insert(int x) {
	struct node* temp = (struct node*)malloc(sizeof(struct node));
	(*temp).data = x;
	(*temp).next = head;
	head = temp;
}
void Print() {
	struct node* temp = head;
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
	printf("Where do you want to insert: ");
	scanf("%d", &n);
	printf("What number: ");
	scanf("%d", &x);
	insertn(x, n);
	Print();
}
