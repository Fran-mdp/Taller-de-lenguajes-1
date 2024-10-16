#include <stdio.h>

int main()
{
    char textFileName[100];
    char binaryFileName[100];
    char targetChar;
    char currentChar;
    int position = 0;

    printf("Ingrese el nombre del archivo de texto: ");
    scanf("%s", textFileName);
    printf("Ingrese el nombre del archivo binario: ");
    scanf("%s", binaryFileName);
    printf("Ingrese el caracter que busca: ");
    scanf(" %c", &targetChar); // Espacio antes de %c para consumir el newline

    FILE *textFile = fopen(textFileName, "r");
    if (!textFile)
    {
        printf("No se pudo abrir el archivo de texto.\n");
        return 1;
    }

    FILE *binaryFile = fopen(binaryFileName, "wb");
    if (!binaryFile)
    {
        printf("No se pudo abrir el archivo binario.\n");
        fclose(textFile);
        return 1;
    }

    while ((currentChar = fgetc(textFile)) != EOF)
    {
        if (currentChar == targetChar)
        {
            fwrite(&position, sizeof(int), 1, binaryFile);
        }
        position++;
    }

    fclose(textFile);
    fclose(binaryFile);

    printf("Las posiciones han sido escritas en el archivo binario.\n");

    return 0;
}
