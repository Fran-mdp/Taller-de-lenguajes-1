#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    int max = INT16_MIN;
    printf("Ingrese un numero: ");
    scanf("%d", &n);
    int *arreglo = (int *) malloc(n * sizeof(int));
    for (int i = 0; i < n; i++){
        arreglo[i] = rand();
    }
    printf("Numeros: \n");
    for (int i = 0; i < n; i++){
        printf("%d \n", arreglo[i]);
    }
    for (int i = 0; i < n; i++){
        if (arreglo[i] > max) max = arreglo[i];
    }
    printf("El maximo es : %d \n", max);
    free(arreglo);
    return 0;
}