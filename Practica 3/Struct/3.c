#include <stdio.h>
#define DIMF 5
typedef struct direccion{
    char calle[50];
    char ciudad[30];
    int codigo_postal;
    char pais[40];
} direc;

typedef struct alumno{
    char apellido[50];
    char nombre[50];
    char legajo[8];
    float promedio;
    direc domicilio;
} alu;

void inicializar_alumno(alu *);

int main(){
    alu alumnos[DIMF];
    alu mejor_promedio;
    mejor_promedio.promedio = -1;
    for(int i=0; i<DIMF; i++){
        inicializar_alumno(&alumnos[i]);
    }
    for(int i=0; i<DIMF; i++){
        if(alumnos[i].promedio > mejor_promedio.promedio){
            mejor_promedio = alumnos[i];
        }
    }
    printf("%s %s con promedio %f", mejor_promedio.apellido, mejor_promedio.nombre, mejor_promedio.promedio);

    return 0;
    
}

void inicializar_alumno(alu *alumno){

    printf("Nombre:");
    scanf("%s", alumno->nombre);
    printf("Apellido:");
    scanf("%s", alumno->apellido);
    printf("Legajo:");
    scanf("%s", alumno->legajo);
    printf("Promedio:");
    scanf("%f", &alumno->promedio);
    printf("Calle:");
    scanf("%s", alumno->domicilio.calle);
    printf("Ciudad:");
    scanf("%s", alumno->domicilio.ciudad);
    printf("Codigo Postal:");
    scanf("%d", &alumno->domicilio.codigo_postal);
    printf("Pais:");
    scanf("%s", alumno->domicilio.pais);
}