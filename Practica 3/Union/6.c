#include <stdio.h>

typedef struct Fecha{
    short int anio;
    char mes;
    char dia;
}fecha;

typedef union hack{
    fecha f;
    int comp;
}comp;

int main(){
    fecha f1,f2;
    comp f1c, f2c;
    f1.anio = 2003;
    f1.mes = 3;
    f1.dia = 3;
    f2.anio = 2003;
    f2.mes = 3;
    f2.dia = 2;
    f1c.f = f1;
    f2c.f = f2;
    printf(f1c.comp == f2c.comp ? "Son iguales \n" : "Son diferentes \n");
    return 0;
}

