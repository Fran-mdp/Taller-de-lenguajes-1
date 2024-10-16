#include <stdio.h>

#define DIAS 31

int main() {
    FILE *f;
    int precipitacion;
    int diaMayorPrecipitacion = 0;
    int mayorPrecipitacion = 0;

    // Abrir el archivo
    f = fopen("precipitaciones.txt", "r");
    if (f == NULL){
        printf("\nError al abrir archivo fuente\n");
        return 1;
    }

    // Leer y procesar cada valor de precipitacion
    for (int dia = 1; dia <= DIAS; dia++) {
        fscanf(f, "%d-", &precipitacion);
        if (precipitacion > mayorPrecipitacion) {
            mayorPrecipitacion = precipitacion;
            diaMayorPrecipitacion = dia;
        }
    }

    fclose(f);

    printf("El dia con mayor precipitacion fue el dia %d con %d mm\n", diaMayorPrecipitacion, mayorPrecipitacion);

    return 0;
}
