#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define MAX 20

int main(){
    char fin[] = "XXX";
    char palabra[MAX] = {0};
    int cant = 0;
    while(strcmp(fin,palabra)){
        printf("Ingrese una palabra: ");
        scanf("%s", palabra);
        if (palabra[strlen(palabra)-1] == 'o') cant++;
    }
    printf("La cantidad de palabras que terminan con 'o' es: %d \n", cant);
}