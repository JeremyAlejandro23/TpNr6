#include <stdLib.h>
#include <stdio.h>
int main() {
	int longitud = 6;
	int ve[6];
	
	printf("Ingrese 6 elementos:\n");
	for (int i = 0; i < longitud; i++) {
		printf("Elemento %d: ", i + 1);
		scanf("%d", &ve[i]);
	}
	
	printf("Contenido del vector:\n");
	for (int i = 0; i < longitud; i++) {
		printf("%d\n", ve[i]);
	}
	
	return 0;
}
