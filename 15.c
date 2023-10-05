#include <stdio.h>
#include <ctype.h>

void contarVocales(const char *texto, int *vocales) {
	for (int i = 0; texto[i] != '\0'; i++) {
		char letra = tolower(texto[i]);
		switch (letra) {
		case 'a':
			vocales[0]++;
			break;
		case 'e':
			vocales[1]++;
			break;
		case 'i':
			vocales[2]++;
			break;
		case 'o':
			vocales[3]++;
			break;
		case 'u':
			vocales[4]++;
			break;
		default:
			break;
		}
	}
}

int main() {
	char texto[100];
	int vocales[5] = {0};
	
	printf("Ingrese un texto: ");
	gets(texto);
	
	contarVocales(texto, vocales);
	
	printf("Cantidad de 'a': %d\n", vocales[0]);
	printf("Cantidad de 'e': %d\n", vocales[1]);
	printf("Cantidad de 'i': %d\n", vocales[2]);
	printf("Cantidad de 'o': %d\n", vocales[3]);
	printf("Cantidad de 'u': %d\n", vocales[4]);
	
	return 0;
}
