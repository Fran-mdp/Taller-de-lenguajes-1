#include <stdio.h>
#include <stdlib.h>

void reservar_memoria(double **, int);
void cargar_arreglo(double *, int);
void imprimir_arreglo(double *, int);
double promedio(double *, int);

int main(){
    double *arreglo = NULL;
    int n;
    double prom;
    printf("Ingrese la dimension de la matriz: ");
    scanf("%d", &n);
    reservar_memoria(&arreglo, n);
    cargar_arreglo(arreglo, n);
    imprimir_arreglo(arreglo, n);
    free(arreglo);
    prom = promedio(arreglo,n);
    printf("%f", prom);
    return 0;
}

void reservar_memoria(double **arreglo, int n){
    *arreglo = (double *)malloc(n*sizeof(double));
}

void cargar_arreglo(double *arreglo, int n){
    double numero;
    for (int i = 0; i < n; i++){
        printf("Ingrese un numero: ");
        scanf("%lf", &numero);
        arreglo[i] = numero;
    }
}

void imprimir_arreglo(double * arreglo, int n){
    for (int i =0; i< n; i++){
        printf("Numero (%d): %f \n", (i+1),arreglo[i]);
    }
}

double promedio(double *arreglo, int n){
    double tot = 0;
    for (int i =0; i< n; i++){
        tot+= arreglo[i];
    }
    return tot/n;
}