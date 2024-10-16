#include <stdio.h>
int main(){
    int valor;
    printf("Ingrese un valor: ");
    scanf("%d", &valor); 
    switch (valor % 2) {
        case 0: printf("El valor es par \n"); 
                break;
        case 1: printf("El valor es impar \n");
                break;
    }
    return 0;
}