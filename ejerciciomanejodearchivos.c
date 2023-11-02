#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int findmin(int b[], int l) {
    int a = 1000000;
    int index = -1;
    int i;

    for (i = 0;i < l; i++) {
        if (b[i] < a) {
            a = b[i];
            index = i;
        }
    }

    return index;
}
int findmax(int b[], int l) {
    int max= -1;
    int i;

    for (i = 0; i < l; i++) {
        if (b[i] > max) {
            max = b[i];
        }
    }

    return max;
}

int moda(int A[], int n) {
    int moda = 0, cont = 0, maxcont = 0;
    int i, j;

    for (i = 0; i < n; i++) {
        cont = 0;
        for (j=0;j<n;j++){
            if (A[j] == A[i]){
                cont++;
            }
        }
        if (cont > maxcont) {
            moda = A[i];
            maxcont = cont;
        }
    }
    return moda;
}

int main() {
    int i,j,n,posAnterior=0,numeroActual=0;
	srand(time(NULL));
	printf("Numero de elementos a ordenar: \n");
	scanf("%d", &n);
	int lista[n];
	
	printf("Lista sin ordenar\n");
	for (i=0;i<n;i++)
	{
		lista[i]=rand() % (30 + 1 - 1) + 1;
		printf(" %d ", lista[i]);
	}
	printf("\n");
	
	for (i=0;i<n;i++){
		numeroActual = lista[i];
		posAnterior = i-1;
		while (posAnterior >= 0 && lista[posAnterior] > numeroActual){
			lista[posAnterior + 1] = lista[posAnterior];
			posAnterior--;
		}
		lista[posAnterior+1] = numeroActual;
	}
	printf("Lista ordenada\n");
	for (i=0;i<n;i++)
		printf(" %d ",lista[i]);
		
    printf("\n\nValor menor:\t%d ", lista[0]);
    printf("\n\nValor mayor:\t%d ", lista[n - 1]);
    
    float promedio=0, suma=0;
	for (i=0;i<n;i++){
		suma += lista[i];
	}
	promedio = suma / n;
	
	printf("\n\nPromedio:\t%f", promedio);
	
    float mediana; 
    if (n % 2 == 0){
    	mediana = (lista[n / 2] + lista[n / 2 - 1]) / 2;
    }
    else{
    	mediana = lista[n / 2];
    }
    
    printf("\n\nMediana:\t%f ", mediana);
    
    int modavalor = moda(lista, n); 
    printf("\n\nModa:\t%d", modavalor);

    return 0;
}
	
