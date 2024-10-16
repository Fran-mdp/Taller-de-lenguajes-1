#include <stdio.h>
#include <stdlib.h>

// Declaración de funciones
void reservar_memoria(float **arreglo, int n);
void inicializar(float *arreglo, int n);
float calcular_promedio(float *arreglo, int n);

int main() {
    int n;
    float *arreglo;
    float promedio;

    printf("Ingrese un numero entero n: ");
    scanf("%d", &n);

    // Reservar memoria para el arreglo de float
    reservar_memoria(&arreglo, n);

    // Inicializar el arreglo con valores ingresados por teclado
    inicializar(arreglo, n);

    // Calcular e imprimir el promedio
    promedio = calcular_promedio(arreglo, n);
    printf("El promedio es: %.2f\n", promedio);

    // Liberar la memoria reservada dinámicamente
    free(arreglo);

    return 0;
}

// Función para reservar memoria para el arreglo de float
void reservar_memoria(float **arreglo, int n) {
    *arreglo = (float *) malloc(n * sizeof(float));
}

// Función para inicializar el arreglo con valores ingresados por teclado
void inicializar(float *arreglo, int n) {
    printf("Ingrese los %d numeros flotantes:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%f", &arreglo[i]);
    }
}

// Función para calcular el promedio de los elementos del arreglo
float calcular_promedio(float *arreglo, int n) {
    float suma = 0;
    for (int i = 0; i < n; i++) {
        suma += arreglo[i];
    }
    return suma / n;
}
