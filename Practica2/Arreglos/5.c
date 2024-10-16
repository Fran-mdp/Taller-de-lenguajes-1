#include <stdio.h>
#define FILAS 3
#define COLUMNAS 3

void suma(int[][COLUMNAS], int[][COLUMNAS], int[][COLUMNAS]);
void imprimir(int [][COLUMNAS]);

int main(){
    int A[FILAS][COLUMNAS] = {{1, 2, 3},{4, 5, 6},{7, 8, 9}};
    int B[FILAS][COLUMNAS] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int C[FILAS][COLUMNAS];
    imprimir(A);
    imprimir(B);
    suma(A,B,C);
    imprimir(C);
    return 0;
}

void suma(int A[][COLUMNAS], int B[][COLUMNAS], int C[][COLUMNAS]){
    for (int i=0; i<FILAS;i++){
        for(int j=0; j<COLUMNAS;j++){
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}
void imprimir(int matriz[][COLUMNAS])
{
    for (int i = 0; i < FILAS; i++){
        for (int j = 0; j < COLUMNAS; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}