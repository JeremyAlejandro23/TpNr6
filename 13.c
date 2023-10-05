#include <stdLib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
	int i;
	char nombre [20];
	system("cls");
	printf("Ingrese un texto: \n");
	gets(nombre);
	
	for (i=0;nombre[i] !='\0';i++)
	{
		if (nombre[i]>='a' && nombre[i]<='z')
			nombre[i]=toupper(nombre[i]);
		
		else if (nombre[i]>='A' && nombre[i]<='Z')
			nombre[i]=tolower(nombre[i]);
		
	}
	printf("El texto ingresado cambia a: %s\n", nombre);
	return 0;
	
}
