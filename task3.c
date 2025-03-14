#include <stdio.h>
#include <stdlib.h>

int main() {
	int n;
	printf("Enter the size of array: ");
	scanf("%d", &n);

	int *a = (int *)malloc(n * sizeof(int));

	for (int i = 0; i < n; i++) {
		printf("Enter the element a[%d]: ", i);
		scanf("%d", &a[i]);
	}


	int count = 0;
	float sum = 0;

	printf("Numbers of negative elements: ");

	for (int i = 0; i < n; i++) {
	if (a[i] < 0) {
		printf("%d ", i);
		sum += a[i];
		count++;
		}
	}
	printf("\n");

	if (count > 0) {
		float avg = sum / count;
		printf("Avarage of negative elements: %.2f\n", avg);
	} 
	else {
		printf("Empty.\n");
	}

	return 0;
}
