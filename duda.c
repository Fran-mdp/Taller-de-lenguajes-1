#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int min;
    char menor[100];
    char aux[100];

    scanf("%99s", aux); // Limitar la lectura para evitar desbordamiento de búfer
    min = strlen(aux);
    strcpy(menor, aux);

    printf("hola\n");
    while (strcmp(aux, "FIN") != 0) { // Se debe verificar que la comparación sea diferente de 0
        if (strlen(aux) < min) {
            strcpy(menor, aux);
            min = strlen(aux);
        }
        scanf("%99s", aux); // Limitar la lectura para evitar desbordamiento de búfer
    }

    printf("menor %s con %d\n", menor, min);

    return 0;
}
