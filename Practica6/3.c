#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){
    if (argc != 4){
        printf("Debes ingresar exactamente dos números y un operador.\n");
        return 0;
    }

    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);
    char *operator = argv[3];

    if (strcmp(operator, "+") == 0){
        printf("Resultado: %d\n", num1 + num2);
    }
    else if (strcmp(operator, "-") == 0){
        printf("Resultado: %d\n", num1 - num2);
    }
    else if (strcmp(operator, "/") == 0){
        if (num2 != 0){
            printf("Resultado: %d\n", num1 / num2);
        } else {
            printf("Error: No se puede dividir por cero.\n");
        }
    }
    else if (strcmp(operator, "*") == 0){
        printf("Resultado: %d\n", num1 * num2);
    }
    else{
        printf("Operador no válido. Usa '+', '-', '/', '*'.\n");
    }
    
    return 0;
}
