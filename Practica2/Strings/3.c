#include <stdio.h>

char * funcion (char *, char, char); 

int main(){
    char cadena[] = "Este es un string de prueba";
    printf("Antes: %s \n", cadena);
    char a = 'e';
    char b = 'Z';
    char *modificado = funcion(cadena,a,b);
    printf("Despues: %s \n", cadena);
    printf("Modificado: %s \n", modificado);
    return 0;
}

char * funcion (char* c, char a, char b){
        for(int i = 0; c[i] != '\0'; i++){
            if (c[i] == a) c[i] = b;
        }
        return c;
    }

