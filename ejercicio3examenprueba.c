#include <stdio.h>
//Programa que recibe números hasta encontrar uno negativo
int main() {
    float numero;

    do { //Use do-while, porque con el while no me estaba funcionando, como que no capataba el primer número que ponías, así que encontré una opción con el do-while
        printf("Dame un número\n");
        scanf("%f", &numero);
    } while (numero >= 0);

    return 0;
}
