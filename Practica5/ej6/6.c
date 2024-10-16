#include <stdlib.h>
#include <stdio.h>
#define LONG 300

int main()
{
    FILE *f = fopen("vinos.csv", "r");
    if (!f)
    {
        printf("Error al abrir el archivo vinos.csv\n");
        return 1;
    }

    FILE *n = fopen("reporte_vinos.txt", "w");
    if (!n)
    {
        printf("Error al abrir el archivo reporte_vinos.txt\n");
        fclose(f);
        return 1;
    }

    float prom[8] = {0};
    int read = 0;
    float max[8] = {0};
    float min[8] = {LONG}; // inicializo en numero de elevada magnitud
    float actual[8];
    char word[LONG];

    fgets(word, LONG, f);
    while (fscanf(f, "%f;%f;%f;%f;%f;%f;%f;%f;%s", &actual[0], &actual[1], &actual[2], &actual[3], &actual[4], &actual[5], &actual[6], &actual[7], word) == 9)
    {
        for (int i = 0; i < 8; i++)
        {
            if (actual[i] > max[i])
                max[i] = actual[i];
            if (actual[i] < min[i])
                min[i] = actual[i];
            prom[i] += actual[i];
        }
        read++;
        printf("Proceso %s\n", word); // marca de fin de procesamiento de vino
    }

    for (int i = 0; i < 8; i++)
        prom[i] /= read;

    fprintf(n, "Atributo  |\t Acidez Fija\t Acidez Volatil\t Acido Citrico\t Azucares Residuales\t PH       \t Sulfatos \t Alcohol  \t Calidad\n");
    fprintf(n, "Promedio  |\t %.2f       \t %.2f          \t %.2f         \t %.2f               \t %.2f     \t %.2f     \t %.2f     \t %.2f  \n", prom[0], prom[1], prom[2], prom[3], prom[4], prom[5], prom[6], prom[7]);
    fprintf(n, "Maximos   |\t %.2f       \t %.2f          \t %.2f         \t %.2f               \t %.2f     \t %.2f     \t %.2f     \t %.2f  \n", max[0], max[1], max[2], max[3], max[4], max[5], max[6], max[7]);
    fprintf(n, "Minimos   |\t %.2f       \t %.2f          \t %.2f         \t %.2f               \t %.2f     \t %.2f     \t %.2f     \t %.2f  \n", min[0], min[1], min[2], min[3], min[4], min[5], min[6], min[7]);

    fclose(f);
    fclose(n);
    return 0;
}
