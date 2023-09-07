#include <stdio.h>
#include <math.h>
//Programa que obtiene los impares de una lista de enteros

int main() {
    
    int numero;
    int d=1;
    printf("Dame un numero y te dare los numeros impares\n");
    scanf("%d", &numero);
    while (d <= numero) //Aquí no usé el módulo, ya que me pareció mejor iniciar en 1, e ir sumando 2
    {
        printf("%d\n", d);
        d=d+2;
    }
    return 0;
}
