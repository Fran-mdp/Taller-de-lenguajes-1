#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef union identificador {
    int DNI;
    char pasaporte[15];
} ident;

typedef struct estudiante {
    char nombre[20];
    char apellido[20];
    char legajo[7];
    ident identificador;
    int esDNI; // agregar un campo para almacenar si es DNI o no
} est;

void cargarEstudiante(est *);
int esDNI(char *);
void imprimirEstudiante(est);
int transformar(char *);

int main() {
    est estudiante;
    cargarEstudiante(&estudiante);
    imprimirEstudiante(estudiante);
    return 0;
}

int esDNI(char *id) {
    for (; *id != '\0'; ++id) {
        if (!isdigit(*id)) {
            return 0;
        }
    }
    return 1;
}

int transformar(char *id) {
    int dni = strtol(id, NULL, 10);
    return dni;
}

void cargarEstudiante(est *estudiante) {
    char identi[15];
    printf("Ingrese un nombre: ");
    scanf("%s", estudiante->nombre);
    printf("Ingrese un apellido: ");
    scanf("%s", estudiante->apellido);
    printf("Ingrese un legajo: ");
    scanf("%s", estudiante->legajo);
    printf("Ingrese un identificador: ");
    scanf("%s", identi);
    if (esDNI(identi)) {
        estudiante->identificador.DNI = transformar(identi);
        estudiante->esDNI = 1;
    } else {
        strcpy(estudiante->identificador.pasaporte, identi);
        estudiante->esDNI = 0;
    }
}

void imprimirEstudiante(est estudiante) {
    printf("Nombre: %s\n", estudiante.nombre);
    printf("Apellido: %s\n", estudiante.apellido);
    printf("Legajo: %s\n", estudiante.legajo);
    if (estudiante.esDNI) {
        printf("Identificador: %d (DNI)\n", estudiante.identificador.DNI);
    } else {
        printf("Identificador: %s (Pasaporte)\n", estudiante.identificador.pasaporte);
    }
}
