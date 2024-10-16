#include <stdio.h>
#include <stdlib.h>
#define LONG 300

int main(){
    FILE *f;
    char linea[LONG]; 

    // Abrir el archivo
    f = fopen("prueba.txt", "r");
    if (f == NULL){
        printf ("\nError al abrir archivo fuente\n"); 
        return 1;
    }
    // Leer una linea del archivo e imprimir la linea en la pantalla
    while (fgets(linea, LONG, f)){
        puts(linea);
    } 
    fclose(f);
    return 0;
}
