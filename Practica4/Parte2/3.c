#include <stdio.h>
#include <stdlib.h>

void reservar_memoria(int ***, int, int);
void cargar_matriz(int **, int, int);
void imprimir_matriz(int **, int, int);
double promedio(int **, int, int);
void liberar_matriz(int ***matriz, int n, int m);

int main(){
    int **matriz = NULL;
    int n, m;
    double prom;
    printf("Ingrese la cantidd de filas: ");
    scanf("%d", &n);
    printf("Ingrese la cantidd de columnas: ");
    scanf("%d", &m);
    reservar_memoria(&matriz, n, m);
    cargar_matriz(matriz, n, m);
    imprimir_matriz(matriz, n, m);
    prom = promedio(matriz, n, m);
    printf("%f", prom);
    liberar_matriz(&matriz, n, m);
    prom = promedio(matriz,n,m);
    printf("%f", prom);
    return 0;
}

void reservar_memoria(int ***matriz, int n, int m){
    *matriz = (int **)malloc(n*sizeof(int*));
    for (int i=0; i<n; i++){
        (*matriz)[i] = (int *)malloc(m*sizeof(int));
    }
}

void cargar_matriz(int **matriz, int n, int m){
    int numero;
    for (int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            printf("Ingrese un numero (%d,%d): ", i,j);
            scanf("%d", &numero);
            matriz[i][j] = numero;
        }
    }
}

void imprimir_matriz(int ** matriz, int n, int m){
    for (int i =0; i< n; i++){
        for(int j = 0; j < m; j++){
            printf("%d  ", matriz[i][j]);
        }
        printf("\n");
    }
}

double promedio(int **matriz, int n, int m){
    double tot = 0;
    for (int i =0; i< n; i++){
        for (int j=0; j<m; j++){
            tot+= matriz[i][j];
        }
    }
    return tot/(n*m);
}

void liberar_matriz(int ***matriz, int n, int m){
    for (int i = 0; i < n; i++) {
        free((*matriz)[i]);
    }
    free(*matriz);
}