#include <stdio.h>

int main() {
	int a, b;
	int *ptr_a = &a;
	int *ptr_b = &b;

	printf("Введите значение переменной a: ");
	scanf("%d", &a);
	printf("Введите значение переменной b: ");
	scanf("%d", &b);

	*ptr_a *= 2;
	*ptr_b /= 2;

	printf("Новое значение a: %d\n", a);
	printf("Новое значение b: %d\n", b);

	return 0;
}
