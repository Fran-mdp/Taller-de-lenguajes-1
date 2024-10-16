#include <stdio.h>
#include <string.h>

struct Jugador
{
    char nombre[100];
    char apellido[100];
    int edad;
    int titulos;
    int ranking;
    float fortuna;
};

int actualizarRanking(char nombre[], char apellido[], int nuevoRanking)
{
    FILE *fp = fopen("jugadores.dat", "r+b"); // abre el archivo para lectura y escritura
    if (fp == NULL)
    {
        printf("No se pudo abrir el archivo.\n");
        return 0;
    }

    struct Jugador jugador;

    // Busca al jugador en el archivo
    while (fread(&jugador, sizeof(struct Jugador), 1, fp))
    {
        if (strcmp(jugador.nombre, nombre) == 0 && strcmp(jugador.apellido, apellido) == 0)
        {
            // Encuentra al jugador y actualiza su ranking
            jugador.ranking = nuevoRanking;

            // Mueve el puntero del archivo de nuevo a la posición del jugador
            fseek(fp, -sizeof(struct Jugador), SEEK_CUR);

            // Escribe los datos actualizados en el archivo
            fwrite(&jugador, sizeof(struct Jugador), 1, fp);
            fclose(fp);
            return 1;
        }
    }

    // Cierra el archivo y retorna 0 si no se encontró al jugador
    fclose(fp);
    return 0;
}

int main()
{
    char nombre[100], apellido[100];
    int nuevoRanking;

    // Leer nombre, apellido y nuevo ranking del teclado
    while (1)
    {
        printf("Ingrese el nombre del jugador (o 'ZZZ' para terminar): ");
        scanf("%s", nombre);
        if (strcmp(nombre, "ZZZ") == 0)
            break;

        printf("Ingrese el apellido del jugador: ");
        scanf("%s", apellido);

        printf("Ingrese el nuevo ranking del jugador: ");
        scanf("%d", &nuevoRanking);

        if (actualizarRanking(nombre, apellido, nuevoRanking))
        {
            printf("El ranking del jugador se actualizó correctamente.\n");
        }
        else
        {
            printf("No se encontró al jugador. Por favor, intente de nuevo.\n");
        }
    }
    return 0;
}
