#include <stdio.h>

#define DIAS 31

int main() {
    FILE *f;
    int codigo_de_apuesta;
    float monto_apostado;
    float monto = 0;

    // Abrir el archivo
    f = fopen("apuestas.txt", "r");
    if (f == NULL){
        printf("\nError al abrir archivo fuente\n");
        return 1;
    }

    // Leer y procesar cada valor de precipitacion
    while(fscanf(f, "%d|%f;", &codigo_de_apuesta, &monto_apostado) == 2){
        monto+= monto_apostado;
    }

    fclose(f);

    printf("El monto total apostado es $%f\n", monto);

    return 0;
}
