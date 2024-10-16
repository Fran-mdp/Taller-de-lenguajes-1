#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define CONST 50

int main(){
    int numeros[CONST];
    int pares = 0;
    int impares = 0;
    srand(time(NULL));
    for (int i = 0; i<=CONST - 1; i++){
        numeros[i]=rand();
    }
    for(int i = 1; i<=CONST-1;i+=2){
        if ((numeros[i] % 2) == 0) pares++;
    }
    for(int i = 0; i<=CONST-1;i+=2){
        if ((numeros[i] % 2) == 1) impares++;
    }
    printf("La cantidad de numeros pares que se encuentran en posiciones impares es: %d \n", pares);
    printf("La cantidad de numeros impares que se encuentran en posiciones pares es: %d \n", impares);
}