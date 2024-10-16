#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 1000
#define DEBUG 1

int buscar(int *arr, int num) {
    int contador = 0;
    for(int i = 0; i < SIZE; i++) {
        contador++;
        if(arr[i] == num) {
            #if DEBUG
            printf("Se accedió al arreglo %d veces antes de encontrar el número.\n", contador);
            #endif
            return i;
        }
    }
    #if DEBUG
    printf("Se accedió al arreglo %d veces y no se encontró el número.\n", contador);
    #endif
    return -1;
}

int main() {
    srand(time(NULL)); 
    int arr[SIZE];

    for(int i = 0; i < SIZE; i++) {
        arr[i] = rand() % 100;
    }

    buscar(arr, 50);
    buscar(arr, 150);

    return 0;
}
