#include <stdLib.h>
#include <stdio.h>
int main() {
	int longitud = 8;
	
	int vector[8];
	
	printf("Ingrese 8 n�meros enteros:\n");
	for (int i = 0; i < longitud; i++) {
		printf("Elemento %d: ", i + 1);
		scanf("%d", &vector[i]);
	}
	int num1, num2;
	printf("Ingrese dos n�meros adicionales:\n");
	printf("N�mero 1: ");
	scanf("%d", &num1);
	printf("N�mero 2: ");
	scanf("%d", &num2);
	
	int encontrado1 = 0, encontrado2 = 0;
	for (int i = 0; i < longitud; i++) {
		if (vector[i] == num1) {
			encontrado1++;
			printf("El n�mero %d se encuentra en la posici�n %d.\n", num1, i + 1);
		}
		if (vector[i] == num2) {
			encontrado2++;
			printf("El n�mero %d se encuentra en la posici�n %d.\n", num2, i + 1);
		}
	}
	
	if (encontrado1 > 0) {
		printf("El n�mero %d se repite %d veces en la secuencia.\n", num1, encontrado1);
	}
	if (encontrado2 > 0) {
		printf("El n�mero %d se repite %d veces en la secuencia.\n", num2, encontrado2);
	}
	
	return 0;
}
