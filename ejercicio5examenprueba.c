
#include <stdio.h>
//Programa que suma N números enteros
int main() {
    int i= 1;
    while (i==1){
    int numero;
    int contador = 1;
    int suma = 0;
    printf("Dame un numero\n");
    scanf("%d", &numero);
    if ( numero > 0){
    while ( contador <= numero ){
        suma = suma + contador;
        contador++;
    }
     printf("El resultado es: %d\n", suma);
    }
    else {
    printf("Ingresa un numero entero positivo\n");
    }
    }
    return 0;
}
