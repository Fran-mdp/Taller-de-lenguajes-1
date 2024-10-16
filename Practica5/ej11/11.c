#include <stdio.h>

int main()
{
    FILE *fp = fopen("tenis.bin", "rb"); // Reemplaza "tenis.bin" con el nombre de tu archivo.

    if (fp == NULL)
    {
        printf("Error al abrir el archivo.\n");
        return 1;
    }

    fseek(fp, 0, SEEK_END); // Mueve el indicador de posición de archivo al final del archivo.
    long size = ftell(fp);  // Obtiene la posición actual del indicador de posición de archivo.

    printf("El tamaño del archivo es %ld bytes.\n", size);

    fclose(fp);

    return 0;
}
