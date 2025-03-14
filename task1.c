#include <stdio.h>

int main() {
	int a, b;
	int *ptr_a = &a;
	int *ptr_b = &b;

	printf("Enter the value a: ");
	scanf("%d", &a);
	printf("Enter the value of b: ");
	scanf("%d", &b);

	*ptr_a *= 2;
	*ptr_b /= 2;

	printf("New a: %d\n", a);
	printf("New b: %d\n", b);

	return 0;
}
