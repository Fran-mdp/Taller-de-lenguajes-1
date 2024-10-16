#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[]){
    if(argc == 1){
        printf("No se ha ingresado ninguna palabra");
        return 0;
    }
    else{
        char cadena[200] = "";
        int palabras = argc -1;
        for(int i=1; i<=palabras; i++){
            strcat(cadena, argv[i]);
            strcat(cadena, " ");
        }
        printf("La cadena es: %s\n", cadena);
        return 1;
    }
}