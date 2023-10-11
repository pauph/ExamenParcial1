#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
	int n,i,j,k, o, suma = 0, suma2=0, sumat = 0;
	srand(time(NULL));
	printf("Ingrese la longitud de la matriz: \n");
	scanf("%d", &n);
	int A[n][n], B[n][n], C[n][n];
	if (n<=9)
	{
		printf("Matriz A:\n");
		for (i=0; i<n; i++){
			for (j=0; j<n; j++){
				A[i][j]=rand()%10;
				printf("%d ",A[i][j]);
			}
			printf("\n");
		}
		printf("Matriz B:\n");
		for (i=0; i<n; i++){
			for (j=0; j<n; j++){
				B[i][j]=rand()%10;
				printf("%d ",B[i][j]);
			}
			printf("\n");
		}
		
		int c=1;
		while (c==1)
		{
			
			printf("Ingresa que operacion quieres\n");
			printf("Para suma, ingresa 1\n");
			printf("Para resta, ingresa 2\n");
			printf("Para multiplicacion, ingresa 3\n");
			printf("Para diagonal, ingresa 4\n");
			printf("Para suma triangular superior, ingresa 5\n");
			printf("Para terminar el programa, ingresa 6\n");
			scanf("%d", &o);
			if(o<=9){
			
			switch(o)
			{
				case 1:
					printf("Matriz C:\n");
					int temporal;
					for (i=0; i<n; i++){
					for (j=0; j<n; j++){
					C[i][j] = A[i][j] + B[i][j];
					printf("%d ", C[i][j]);
					}
					printf("\n");
					}
				break;
				
				case 2:
					printf("Matriz C:\n");
					for (i=0; i<n; i++){
					for (j=0; j<n; j++){
					C[i][j] = A[i][j] - B[i][j];
					printf("%d ", C[i][j]);
					}
					printf("\n");
					}
				break;
					
				case 3:
					printf("Matriz C:\n");
					for (i=0; i<n; i++){
						for (j=0; j<n; j++){
							temporal=0;
							for (k=0; k<n; k++){
							temporal+= A[i][k] * B[k][j];
							}
							C[i][j] = temporal;
							printf("%d ", C[i][j]);
						}
				printf("\n");
					}
				break;
				
				case 4:
					for (i=0; i<n; i++)
					{
						for (j=0; j<n; j++)
						{
							printf("%d ",A[i][j]);
							if (i==j)
								suma += A[i][j];
						}
						printf("\n");
					}
					printf("La suma de la diagonal de la matriz A es: %d\n", suma);
					
					for (i=0; i<n; i++)
					{
						for (j=0; j<n; j++)
						{
							printf("%d ",B[i][j]);
							if (i==j)
								suma2 += B[i][j];
						}
						printf("\n");
					}
					printf("La suma de la diagonal de la matriz A es: %d\n", suma2);
				break;
				
				case 5:
					printf("\n");
					for (i = 0; i < n; i++) {
        				for (j = i + 1; j < n; j++) {
            				printf("%d ", A[i][j]);
            				sumat += A[i][j]; 
        				}
        				printf("\n");
    				}

    				printf("Suma triangular superior de la matriz A: %d\n", sumat);
					break;
				
				default:
					printf("Se termino el programa");
					c=6;
				break;
				
			}
			}
	 
		}
	}
	else{
		printf("Ingresa otro numero ntre 0 y 9");
	}
	return 0;
}
