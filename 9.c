#include <stdLib.h>
#include <stdio.h>
int main() {
	int n = 8;
	int vec[8];
	
	for (int i = 0; i < n; i++) {
		scanf("%d", &vec[i]);
	}
	
	printf("Vector ingresado:\n");
	for (int i = 0; i < n; i++) {
		printf("%d ", vec[i]);
	}
	printf("\n");
	
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (vec[j] < vec[j + 1]) {
				int temp = vec[j];
				vec[j] = vec[j + 1];
				vec[j + 1] = temp;
			}
		}
	}
	
	printf("Vector ordenado en forma decreciente:\n");
	for (int i = 0; i < n; i++) {
		printf("%d ", vec[i]);
	}
	printf("\n");
	
	return 0;
}
