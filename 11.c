#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void inverted(int i,int j,char*text) {
	int longitud;
	int temporal;
	
	
	longitud=strlen(text);
	j=longitud-1;
	for (i=0; i<longitud/2;i++)
	{
		temporal=text[i];
		text[i]=text[j];
		text[j]=temporal;
		j--;
	}
	printf("La cadena ingresada e invertida es: %s\n", text);
	
}

int main()
{
	char i=0,j=0;
	char text[20];
	system("cls");
	printf("Introduce un texto (menos de 20 caracteres): ");
	gets(text);
	inverted(i,j,text);
	system("pause");
}
