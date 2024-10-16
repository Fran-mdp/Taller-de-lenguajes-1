#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define DIMF 10

struct rectangulo{
    float base;
    float altura;
};
void inicializar(struct rectangulo *, float, float);
float area(struct rectangulo);
int posMenor(struct rectangulo []);
void imprimirRectangulo(struct rectangulo);
void imprimirArreglo(struct rectangulo []);

int main(){
    struct rectangulo arreglo[DIMF];
    srand(time(NULL));
    for(int i=0; i<DIMF; i++){
        inicializar(&arreglo[i],rand()%20,rand()%20);
    }
    imprimirArreglo(arreglo);
    printf("La posicion donde esta la menor area es %d \n", posMenor(arreglo));
    return 0;
}

void inicializar(struct rectangulo *r, float b, float a){
    r->base = b;
    r->altura = a;
}

float area(struct rectangulo r){
    return (r.altura * r.base);
}

int posMenor(struct rectangulo arreglo[]){
    int pos;
    int min = 900;
    for(int i=0; i<DIMF; i++){
        if (area(arreglo[i]) < min){
            min = area(arreglo[i]);
            pos = i;
        }
    }
    return pos;
}

void imprimirRectangulo(struct rectangulo r){
    printf("\t Base: %f Altura: %f \n", r.base, r.altura);
}

void imprimirArreglo(struct rectangulo arreglo[]){
    for(int i=0; i<DIMF; i++){
        printf("Pos %d: \n", i);
        imprimirRectangulo(arreglo[i]);
        printf("\t Area: %f \n", area(arreglo[i]));
    }
}