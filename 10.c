#include <stdLib.h>
#include <stdio.h>
int main() {
	int num = 8;
	int arr[8];
	
	for (int i = 0; i < num; i++) {
		scanf("%d", &arr[i]);
	}
	
	printf("Vector ingresado:\n");
	for (int i = 0; i < num; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	
	for (int i = 0; i < num - 1; i++) {
		for (int j = 0; j < num - i - 1; j++) {
			if (arr[j] < 0 && arr[j + 1] >= 0) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
			if (arr[j] < arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	
	int posNeg = 0;
	while (posNeg < num && arr[posNeg] >= 0) {
		posNeg++;
	}
	
	for (int i = posNeg; i < num; i++) {
		for (int j = posNeg; j < num - i + posNeg - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	
	printf("Positivos ordenados en forma decreciente:\n");
	for (int i = 0; i < posNeg; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	
	printf("Negativos ordenados en forma creciente:\n");
	for (int i = posNeg; i < num; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	
	return 0;
}
