#include <stdio.h>
#define DIMF 10
void funcion(float [], float *, float *, float *, int);

int main(){
    float arreglo[DIMF] = {1,2,3,4,5,6,7,8,9,10};
    float promedio,minimo,maximo;
    funcion(arreglo,&promedio,&minimo,&maximo,DIMF);
    printf("Promedio: %f \n Minimo: %f \n Maximo: %f", promedio,minimo,maximo);
    return 0;


}

void funcion(float arreglo[], float *promedio, float *minimo, float *maximo, int dimF){
    float suma;
    int i;
    suma = 0;
    *minimo = 999999999;
    *maximo = -99999999;
    for(i=0;i<dimF;i++){
        if(arreglo[i] > *maximo) *maximo = arreglo[i];
        if(arreglo[i] < *minimo) *minimo = arreglo[i];
        suma+=arreglo[i];
    }
    *promedio = suma / (i+1);
}