#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int gastos(int*compras,int tt,int mayor) {
	int i=0;
	for(i=0;i<10;i++){
		printf("IngresePrecio de la Compra Nro%d \n",i+1);
		scanf("%d",&compras[i]);
		tt+=compras[i];
		
		if(mayor<compras[i])
		{
			mayor=compras[i];
		}
	}
	system("pause");
	system("cls");
	printf("El mayor gasto fue de: %d\n",mayor);
	printf("El Gasto en Total fue de: %d\n",tt);
	return tt;
}

int main(){
	
	
	int compras[10];
	int tt=0;
	int mayor=0;
	gastos(compras,tt,mayor);
	system("pause");
}
