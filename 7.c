#include <stdLib.h>
#include <stdio.h>

int main() {
	int n = 10;
	int tiempos[10];
	
	for (int i = 0; i < n; i++) {
		printf("Tiempo del corredor %d: ", i + 1);
		scanf("%d", &tiempos[i]);
	}
	
	int max1 = tiempos[0];
	int max2 = tiempos[0];
	int min = tiempos[0];
	int suma = tiempos[0];
	
	for (int i = 1; i < n; i++) {
		if (tiempos[i] > max1) {
			max2 = max1;
			max1 = tiempos[i];
		} else if (tiempos[i] > max2 && tiempos[i] != max1) {
			max2 = tiempos[i];
		}
		
		if (tiempos[i] < min) {
			min = tiempos[i];
		}
		
		suma += tiempos[i];
	}
	
	float promedio = (float) suma / n;
	
	printf("Primer lugar: %d\n", max1);
	printf("Segundo lugar: %d\n", max2);
	printf("Último lugar: %d\n", min);
	printf("Tiempo promedio: %.2f\n", promedio);
	
	return 0;
}
