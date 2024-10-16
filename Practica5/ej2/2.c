#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define LONG 300

int main(){
    FILE *f;
    char linea[LONG];
    int min = 0, may = 0, dig = 0; 

    // Abrir el archivo
    f = fopen("prueba.txt", "r");
    if (f == NULL){
        printf ("\nError al abrir archivo fuente\n"); 
        return 1;
    }
    // Leer una linea del archivo e imprimir la linea en la pantalla
    while (fgets(linea, LONG, f)){
        for(int i = 0; linea[i]!='\0'; i++){
            if (islower(linea[i])){ 
                min++;
            }
            else{
                if (isupper(linea[i])){
                    may++;
                }
                else{
                    if (isdigit(linea[i])){
                        dig++;
                    }
                }
            }
        }
    } 
    fclose(f);
    printf("Mayusculas: %d \nMinusculas: %d \nDigitos: %d \n", may,min,dig);
    return 0;
}
