#include <stdio.h>
#include <stdlib.h>

int main() {
	float *ptr1, *ptr2, *ptr3;

	ptr1 = (float *)malloc(sizeof(float));
	ptr2 = (float *)malloc(sizeof(float));
	ptr3 = (float *)malloc(sizeof(float));

	*ptr1 = 3.14;
	*ptr2 = 6.62;
	*ptr3 = 6.6;

 	float temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;

	printf("ptr1: %f\n", *ptr1);
	printf("ptr2: %f\n", *ptr2);
	printf("ptr3: %f\n", *ptr3);
	return 0;
}
