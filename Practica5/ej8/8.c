#include <stdio.h>

int main()
{
    FILE *fp_txt, *fp_bin;
    int num;

    // Abrir archivos
    fp_txt = fopen("numeros.txt", "w");
    fp_bin = fopen("numeros.dat", "wb");
    if (fp_txt == NULL || fp_bin == NULL)
    {
        printf("No se pudo abrir el archivo.\n");
        return 1;
    }

    // Leer números y escribir en los archivos
    printf("Ingrese números de una cifra (del 0 al 9), ingrese -1 para terminar: ");
    scanf("%d", &num);
    while (num != -1)
    {
        if (num >= 0 && num <= 9)
        {
            fprintf(fp_txt, "%d", num);           // Escribe en el archivo de texto
            fwrite(&num, sizeof(int), 1, fp_bin); // Escribe en el archivo binario
        }
        else
        {
            printf("Ingrese solo números de una cifra (del 0 al 9): ");
        }
        scanf("%d", &num);
    }

    // Cerrar archivos
    fclose(fp_txt);
    fclose(fp_bin);

    return 0;
}
