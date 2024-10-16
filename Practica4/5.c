#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

void contar_letras(const char *cadena, int *minusculas, int *mayusculas);

int main() {
    int minusculas, mayusculas;
    char *arreglo = (char *) malloc(100 * sizeof(char));

    if (arreglo == NULL) {
        printf("Error al reservar memoria.\n");
        return 1;
    }

    for (int i = 0; i < 10; ++i) {
        printf("Ingrese la oracion %d: ", i + 1);
        fgets(arreglo, 100, stdin);

        // Reemplazar el salto de línea con un carácter nulo
        arreglo[strcspn(arreglo, "\n")] = '\0';

        contar_letras(arreglo, &minusculas, &mayusculas);

        printf("Oracion %d: %s\n", i + 1, arreglo);
        printf("  Letras minusculas: %d\n", minusculas);
        printf("  Letras mayusculas: %d\n", mayusculas);
    }

    free(arreglo);
    return 0;
}

void contar_letras(const char *cadena, int *minusculas, int *mayusculas) {
    *minusculas = 0;
    *mayusculas = 0;

    for (size_t i = 0; cadena[i] != '\0'; ++i) {
        if (islower(cadena[i])) {
            ++(*minusculas);
        } else if (isupper(cadena[i])) {
            ++(*mayusculas);
        }
    }
}
