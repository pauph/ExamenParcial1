#include <stdio.h>

long long fibonacci(long long num) {
    if (num >= 2)
        return (fibonacci(num - 1) + fibonacci(num - 2));
    else if (num == 2)
        return 1;
    else if (num == 1)
        return 1;
    else if (num == 0)
        return 0;
}

void printFibonacci(long long a, long long numero) {
    if (a <= numero) {
        long long fib = fibonacci(a);
        if (fib >= 0) {
            printf("%lld ", fib);
        }
        printFibonacci(a + 1, numero);
    }
}

int main() {
    long long numero;
    printf("Numero de elementos de la serie fibonacci: ");
    scanf("%lld", &numero);
    printf("\n");

    printf("Elementos de la serie:\n");
    printFibonacci(0, numero - 1);

    return 0;
}
