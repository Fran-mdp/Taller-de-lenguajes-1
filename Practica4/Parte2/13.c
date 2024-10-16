//a. Con la variable m, puedes modelar un arreglo unidimensional o una matriz bidimensional almacenada en un arreglo unidimensional.

//b. Sí, puedes utilizar m como si fuera una matriz simulando el acceso por filas y columnas. Para acceder a sus elementos, puedes utilizar la fórmula:

//índice = i * (número de columnas) + j

//En este caso, el número de columnas es y. Entonces, la fórmula se convierte en:

//índice = i * y + j

//c.
#include <stdio.h>
#include <stdlib.h>

int main() {
    int x = 2, y = 3;
    int *m = (int *)malloc(x * y * sizeof(int));

    // Cargar la matriz con valores leídos desde el teclado
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            printf("Ingrese el elemento en la posición (%d, %d): ", i, j);
            scanf("%d", &m[i * y + j]);
        }
    }

    // Imprimir los valores de la matriz
    printf("Matriz:\n");
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            printf("%d ", m[i * y + j]);
        }
        printf("\n");
    }

    // Liberar la memoria reservada
    free(m);

    return 0;
}
