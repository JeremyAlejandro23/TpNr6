#include <stdLib.h>
#include <stdio.h>
int main() {
	int n = 10;
	int arr[10];
	
	printf("Ingrese %d números enteros:\n", n);
	for (int i = 0; i < n; i++) {
		printf("Elemento %d: ", i + 1);
		scanf("%d", &arr[i]);
	}
	
	int max = arr[0];
	int min = arr[0];
	int cntMax = 1;
	int cntMin = 1;
	
	for (int i = 1; i < n; i++) {
		if (arr[i] > max) {
			max = arr[i];
			cntMax = 1;
		} else if (arr[i] == max) {
			cntMax++;
		}
		
		if (arr[i] < min) {
			min = arr[i];
			cntMin = 1;
		} else if (arr[i] == min) {
			cntMin++;
		}
	}
	
	printf("El valor máximo es %d y aparece %d veces.\n", max, cntMax);
	printf("El valor mínimo es %d y aparece %d veces.\n", min, cntMin);
	
	return 0;
}
