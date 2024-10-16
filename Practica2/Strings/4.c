#include <stdio.h>

int len (char *); 

int main(){
    char cadena[] = "123456789";
    int longitud = len(cadena);
    printf("Longitud: %d \n", longitud);
    return 0;
}

int len (char* c){
    int cant = 0;
    while(c[cant] != '\0') cant++;
    return cant;
    }