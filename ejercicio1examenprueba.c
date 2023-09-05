#include <stdio.h>
/*Programa que pide un número, y te imprime los 10 siguientes números*/
int main(){
	int numero;
	printf("Dame un numero: \n");
	scanf("%d", &numero);
	int contador;
	contador=numero;
	while ( contador <= numero+10 )
	{
		printf("%d\n",contador);
		contador++;
	}
	return 0;
}
