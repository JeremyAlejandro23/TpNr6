#include <stdio.h>
#include <stdLib.h>
#include <string.h>

int pali(const char *txt) {
	int longi=strlen(txt);
	int i;
	for (i=0;i<longi/2;i++){
		if (txt[i] != txt[longi-1-i]){
			return 0;
		}
	}
	return 1;
}

int main (){
	char tex [50];
	printf ("Introduce un texto: ");
	fgets (tex, sizeof(tex),stdin);
	tex[strcspn(tex,"\n")]='\0';
	if (tex[strlen(tex)-1]=='\n')
		tex[strlen(tex)-1]='\0';
	if (pali(tex)){
		printf ("El texto es palindromo.\n");
	}
	else {
		printf ("El texto no es palindromo.\n");
	}
	system("pause");
	return 0;
}
