#include <stdio.h>
#include <string.h>

struct Empleado {
	char nom[50];
	char fec[20];
	float sue;
};

int main() {
	struct Empleado emp[3];
	int empAntiguo = 0;
	
	for (int i = 0; i < 3; i++) {
		printf("Ingrese el nombre del empleado %d: ", i + 1);
		scanf("%s", emp[i].nom);
		printf("Ingrese la fecha de ingreso del empleado %d: ", i + 1);
		scanf("%s", emp[i].fec);
		printf("Ingrese el sueldo del empleado %d: ", i + 1);
		scanf("%f", &emp[i].sue);
		
		if (strcmp(emp[i].fec, emp[empAntiguo].fec) < 0) {
			empAntiguo = i;
		}
	}
	
	printf("El empleado más antiguo es: %s\n", emp[empAntiguo].nom);
	printf("Su sueldo es: %.2f\n", emp[empAntiguo].sue);
	
	return 0;
}
