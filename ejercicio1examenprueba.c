#include <stdio.h>
/*Programa que pide un n�mero, y te imprime los 10 siguientes n�meros*/
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
