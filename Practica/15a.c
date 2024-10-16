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
    int result = 1;
    for (int i = num; i>=2; i--){
        result *= i;
    }
    return result;
}