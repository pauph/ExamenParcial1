#include <stdio.h>
#include <time.h>

void bubblesort(int lista[], int n);
void bubblesort(int lista[], int n){
	int i, j;
	for (i = 0; i < n - 1; i++) {
		for (j = 0; j < n - 1 - i; j++) { 
			if (lista[j] > lista[j + 1]) {
				int temp = lista[j];
				lista[j] = lista[j + 1];
				lista[j + 1] = temp;
			}
		}
	}

}



int main(){

	int n = 10000, i;
	srand(time(NULL));
	int lista[n];
	
	for (i=0;i<n;i++)
		lista[i]=rand() % (100 + 1 - 1) + 1;
	
	printf("Lista sin ordenar\n");
	
	for (i=0;i<n;i++)
		printf(" %d ", lista[i]);
		printf("\n");
	
	clock_t tic = clock();
	
	bubblesort(lista,n);
	
	clock_t toc = clock();
	double tiempotranscurrido = ((double)(toc - tic) / CLOCKS_PER_SEC) * 1000.0;
	
	printf("Lista ordenada\n");
	
	for (i=0;i<n;i++)
		printf(" %d ", lista[i]);
	printf("\n\nElapsed time: %.2f milliseconds\n", tiempotranscurrido);
	return 0;

}
