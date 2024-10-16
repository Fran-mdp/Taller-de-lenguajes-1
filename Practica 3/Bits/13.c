#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct dispositivosStruct{
    unsigned int vibrar : 1;
    unsigned int linterna : 1;
    unsigned int trasera : 1;
    unsigned int frontal : 1;
    unsigned int datos : 1;
    unsigned int gps : 1;
    unsigned int wifi : 1;
    unsigned int bluetooth : 1;
} dispositivos;

typedef enum {vibrar, linterna, trasera, frontal, datos, gps, wifi, bluetooth} nombres;

void prender(dispositivos *dis, nombres nombre);
void apagar(dispositivos *dis, nombres nombre);
void imprimir(dispositivos dis);


int main(){
    dispositivos dis = {1,1,1,1,1,1,1,1};

    imprimir(dis);
    apagar(&dis,wifi);
    imprimir(dis);
    return 0;
}


void prender(dispositivos *dis, nombres nombre){
    unsigned int *ptr = (unsigned int *)dis;
    *ptr |= (1 << nombre);
}

void apagar(dispositivos *dis, nombres nombre){
    unsigned int *ptr = (unsigned int *)dis;
    *ptr &= ~(1 << nombre);
}

void imprimir(dispositivos dis){
    unsigned int *ptr = (unsigned int *)&dis;
    printf("Bits: %u \n", *ptr);
}
