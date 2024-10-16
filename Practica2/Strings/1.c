#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define MAX 20

int main(){
    char fin[] = "ZZZ";
    char palabra[MAX] = {0};
    int cant = 0;
    while(strcmp(fin,palabra)){
        printf("Ingrese una palabra: ");
        scanf("%s", palabra);
        if (strlen(palabra) == 5) cant++;
    }
    printf("La cantidad de palabras de longitud 5 es: %d \n", cant);
}