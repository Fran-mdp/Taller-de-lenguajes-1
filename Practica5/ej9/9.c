#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_JUGADORES 3

typedef struct
{
    char nombre[50];
    char apellido[50];
    int edad;
    int titulos;
    int ranking;
    double fortuna;
} Jugador;

void leerJugadores(Jugador jugadores[MAX_JUGADORES]);
void guardarJugadores(Jugador jugadores[MAX_JUGADORES]);
void cargarJugadores(Jugador jugadores[MAX_JUGADORES]);
void mostrarInformacion(Jugador jugadores[MAX_JUGADORES]);

int main()
{
    Jugador jugadores[MAX_JUGADORES];
    leerJugadores(jugadores);
    guardarJugadores(jugadores);
    cargarJugadores(jugadores);
    mostrarInformacion(jugadores);
    return 0;
}

void leerJugadores(Jugador jugadores[MAX_JUGADORES])
{
    for (int i = 0; i < MAX_JUGADORES; i++)
    {
        printf("Ingrese el nombre del jugador: ");
        scanf("%s", jugadores[i].nombre);
        printf("Ingrese el apellido del jugador: ");
        scanf("%s", jugadores[i].apellido);
        printf("Ingrese la edad del jugador: ");
        scanf("%d", &(jugadores[i].edad));
        printf("Ingrese la cantidad de titulos ganados por el jugador: ");
        scanf("%d", &(jugadores[i].titulos));
        printf("Ingrese el ranking del jugador: ");
        scanf("%d", &(jugadores[i].ranking));
        printf("Ingrese la fortuna acumulada del jugador: ");
        scanf("%lf", &(jugadores[i].fortuna));
    }
}

void guardarJugadores(Jugador jugadores[MAX_JUGADORES])
{
    FILE *f = fopen("jugadores.bin", "wb");
    if (f == NULL)
    {
        printf("No se pudo abrir el archivo para escritura\n");
        exit(1);
    }
    fwrite(jugadores, sizeof(Jugador), MAX_JUGADORES, f);
    fclose(f);
}

void cargarJugadores(Jugador jugadores[MAX_JUGADORES])
{
    FILE *f = fopen("jugadores.bin", "rb");
    if (f == NULL)
    {
        printf("No se pudo abrir el archivo para lectura\n");
        exit(1);
    }
    fread(jugadores, sizeof(Jugador), MAX_JUGADORES, f);
    fclose(f);
}

void mostrarInformacion(Jugador jugadores[MAX_JUGADORES])
{
    int index_mejor_ranking = 0;
    int index_mas_titulos = 0;
    for (int i = 1; i < MAX_JUGADORES; i++)
    {
        if (jugadores[i].ranking < jugadores[index_mejor_ranking].ranking)
        {
            index_mejor_ranking = i;
        }
        if (jugadores[i].titulos > jugadores[index_mas_titulos].titulos)
        {
            index_mas_titulos = i;
        }
    }

    printf("El jugador con el mejor ranking es: %s %s\n", jugadores[index_mejor_ranking].nombre, jugadores[index_mejor_ranking].apellido);
    printf("El jugador con mas titulos es: %s %s\n", jugadores[index_mas_titulos].nombre, jugadores[index_mas_titulos].apellido);
}