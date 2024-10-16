#include <stdlib.h>
#include "matriz.h"

matriz crear(int n){
    matriz m = (matriz)calloc(n,sizeof(float*));
    for (int i=0; i<n; i++){
        m[i] = (float *)calloc(n, sizeof(float));
    }
    return m;
}

float suma(matriz m, int n){
    float sum =0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            sum+= m[i][j];
        }
    }
    return sum;
}

void liberar(matriz *m, int n){
    for(int i=0; i<n; i++){
        free((*m)[i]);
    }
    free(*m);
    *m = NULL;
}