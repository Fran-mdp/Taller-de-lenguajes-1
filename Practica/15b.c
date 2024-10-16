#include <stdio.h>
int factorial(int);
int main(){
    int num;
    printf("Ingrese un numero: ");
    scanf("%d", &num);

    int resultado = factorial(num);
    printf("El facotrial es: %d \n" , resultado);
    return 0;
}
int factorial(int num){
    if (num <= 1)
        return 1;
    return num * factorial(num - 1);
}