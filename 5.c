#include <stdLib.h>
#include <stdio.h>
int main() {
	int longitud_maxima = 20;
	int pares[longitud_maxima];
	int impares[longitud_maxima];
	int numero, contador_pares = 0, contador_impares = 0;
	

	printf("Ingrese números enteros (introduzca 0 para terminar):\n");
	do {
		printf("Número: ");
		scanf("%d", &numero);
		
		if (numero != 0) {
			if (numero % 2 == 0) {

				pares[contador_pares] = numero;
				contador_pares++;
			} else {
				impares[contador_impares] = numero;
				contador_impares++;
			}

			if (contador_pares + contador_impares >= longitud_maxima) {
				printf("Se han ingresado 20 números. Terminando la entrada.\n");
				break;
			}
		}
	} while (numero != 0);
	printf("Números pares:\n");
	for (int i = 0; i < contador_pares; i++) {
		printf("%d ", pares[i]);
	}
	printf("\n");
	
	printf("Números impares:\n");
	for (int i = 0; i < contador_impares; i++) {
		printf("%d ", impares[i]);
	}
	printf("\n");
	
	return 0;
}
