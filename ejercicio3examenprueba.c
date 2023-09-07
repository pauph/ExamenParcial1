#include <stdio.h>
//Programa que recibe números hasta encontrar uno negativo
int main() {
    float numero;

    while (numero >= 0) {
        printf("Dame un número\n");
        scanf("%f", &numero);
    }
    
    return 0;
}
