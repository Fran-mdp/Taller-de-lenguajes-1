#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define DIMF 10


float promedio(float [], int);
float minimo(float [], int);
int posMax(float [], int);

int main(){
    float arreglo[DIMF] = {1,2,3,4,5,6,7,8,9,10};
    printf("El promedio es de: %f \n", promedio(arreglo,DIMF));
    printf("El menor numero es de: %f \n", minimo(arreglo,DIMF));
    printf("La posicion en la que se encuentra el mayor numero es: %d \n", posMax(arreglo,DIMF));
    return 0;
}

float promedio(float arreglo[], int dimF){
    float tot = 0;
    for(int i=0; i<=dimF-1; i++){
        tot+=arreglo[i];
    }
    return tot/dimF;
}

float minimo(float arreglo[], int dimF){
    float min = 999999999999999999;
    for (int i=0; i<=dimF-1; i++){
        if (arreglo[i]<min) min=arreglo[i];
    }
    return min;
}

int posMax(float arreglo[], int dimF){
    int posMax;
    float max = -1;
    for(int i=0; i<=dimF-1; i++){
        if(arreglo[i]>max){
            max = arreglo[i];
            posMax = i;
        }
    }
    return posMax;
}