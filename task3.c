#include <stdio.h>
#include <stdlib.h>

int main() {
	int n;
	printf("Введите размер массива: ");
	scanf("%d", &n);

	int *a = (int *)malloc(n * sizeof(int));

	for (int i = 0; i < n; i++) {
		printf("Введите элемент a[%d]: ", i);
		scanf("%d", &a[i]);
	}


	int count = 0;
	float sum = 0;
	printf("Номера отрицательных элементов: ");
	for (int i = 0; i < n; i++) {
	if (a[i] < 0) {
		printf("%d ", i);
		sum += a[i];
		count++;
		}
	}
	printf("\n");

	if (count > 0) {
		float average = sum / count;
		printf("Среднее арифметическое отрицательных элементов: %.2f\n", average);
	} 
	else {
		printf("Отрицательных элементов нет.\n");
	}

	return 0;
}
