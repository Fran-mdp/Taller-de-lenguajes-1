#include <stdlib.h>
#include <stdio.h>
#include "matriz.h"


int main(){
    matriz m = crear(2);
    m[0][0] = 1;
    m[0][1] = 2;
    m[1][0] = 3;
    m[1][1] = 4;
    float sum = suma(m,2);
    printf("Suma = %.2f \n", sum);
    liberar(&m,2);
    if(m == NULL){
        printf("es null");
    }
    else{
        printf("%.2f\n", m[0][0]);
        printf("%.2f\n", m[0][1]);
        printf("%.2f\n", m[1][0]);
        printf("%.2f\n", m[1][1]);
    }
}