#include <stdio.h>
int main(){
    int n1, n2;
    float operation;
    char c;
    printf("Ingrese el primer numero: ");
    scanf("%d", &n1);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &n2);
    printf("Ingrese un operador matematico (+,-,/,x): ");
    scanf(" %c", &c);
    switch (c){
    case '+':
        operation = n1 + n2;
        printf("El resultado de hacer %d %c %d es = %f \n", n1, c, n2, operation);
        break;
    case '-':
        operation = n1 - n2;
        printf("El resultado de hacer %d %c %d es = %f \n", n1, c, n2, operation);
        break;
    case '/':
        operation = (float)n1 / n2;
        printf("El resultado de hacer %d %c %d es = %f \n", n1, c, n2, operation);
        break;
    case 'x':
        operation = n1 * n2;
        printf("El resultado de hacer %d %c %d es = %f \n", n1, c, n2, operation);
        break;  
    default:
        printf("El caracter ingresado no es una de las posibles operaciones. \n");
        break;
    }
    return 0;
}