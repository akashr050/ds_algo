#include<stdio.h>
#include<math.h>
main() {
	int a;
	int *p;
	char c;
	char *p0;
	double d;
	double *p1;
	p0 = &c;
	c = 'a';
	*p0 = 'b';
	printf("%d \n", p0);
	printf("%d \n", &c);
	printf("%d \n", c);
	printf("%d \n", p0);
	printf("%d \n", sizeof(char));
	printf("%d \n", (p0+1));
}
