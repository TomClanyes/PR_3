#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void selectionSort(float *arr, int n) {
	for (int i = 0; i < n - 1; i++) {
		int min_idx = i;
	for (int j = i + 1; j < n; j++) {
		if (arr[j] < arr[min_idx]) {
		min_idx = j;
		}
	}
	float temp = arr[min_idx];
	arr[min_idx] = arr[i];
	arr[i] = temp;
	}
}

int main() {
	int n;
	printf("Введите размер массива b: ");
	scanf("%d", &n);

	float *b = (float *)malloc(n * sizeof(float));
	float *c = (float *)malloc(n * sizeof(float));
	
	for (int i = 0; i < n; i++) {
		printf("Введите элемент b[%d]: ", i);
		scanf("%f", &b[i]);
	}

	int c_size = 0;
	for (int i = 0; i < n; i++) {
		if (b[i] > 0) {
		c[c_size] = sqrt(b[i]) / 5;
		c_size++;
		}
	}

	selectionSort(c, c_size);

	for (int i = 0; i < c_size; i++) {
		printf("%.2f ", c[i]);
	}
	printf("\n");

	return 0;
}
