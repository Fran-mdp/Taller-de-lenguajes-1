#include <stdio.h>
#include <stdlib.h>
#define FILAS 5
#define COLUMNAS 3

void imprimirTranspuesto(int [][COLUMNAS], int, int);
void imprimir(int[][COLUMNAS], int, int);

int main(){
    int matriz[FILAS][COLUMNAS] = {{1,2,3},{4,5,6},{7,8,9},{10,11,12},{13,14,15}};
    imprimir(matriz, FILAS, COLUMNAS);
    imprimirTranspuesto(matriz, FILAS, COLUMNAS);
    return 0;
}

void imprimirTranspuesto(int matriz[][COLUMNAS], int f, int c){
    for (int j=0;j<c;j++){
        for(int i=0;i<f;i++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void imprimir(int matriz[][COLUMNAS], int f, int c)
{
    for (int i=0; i<f; i++){
        for (int j=0; j<c; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
