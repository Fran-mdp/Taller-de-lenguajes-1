#include <stdio.h>
typedef enum {lunes, martes, miercoles, jueves, viernes, sabado, domingo}dias;
void imprimirDia1(dias dia);
void imprimirDia2(dias dia);

int main(){
    dias d;
    imprimirDia1(lunes);
    imprimirDia2(martes);
}

void imprimirDia1(dias dia) {
    const char *nombresDias[] = {
        "Lunes",
        "Martes",
        "Miércoles",
        "Jueves",
        "Viernes",
        "Sábado",
        "Domingo"
    };

    if (dia >= lunes && dia <= domingo) {
        printf("%s\n", nombresDias[dia]);
    } else {
        printf("Día no válido\n");
    }
}

void imprimirDia2(dias dia) {
    switch (dia) {
        case lunes:
            printf("Lunes\n");
            break;
        case martes:
            printf("Martes\n");
            break;
        case miercoles:
            printf("Miércoles\n");
            break;
        case jueves:
            printf("Jueves\n");
            break;
        case viernes:
            printf("Viernes\n");
            break;
        case sabado:
            printf("Sábado\n");
            break;
        case domingo:
            printf("Domingo\n");
            break;
        default:
            printf("Día no válido\n");
    }
}

