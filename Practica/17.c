#include <stdio.h>
void funcion(int n, float *min, float *max);
int main(){
    int n;
    float min, max;
    min = 9999999;
    max = -1;
    printf("Ingrese la cantidad de numeros : ");
    scanf("%d", &n);
    funcion(n,&min,&max);
    printf("El numero mayor es %f y el menor es %f \n", max,min);
}
void funcion(int n, float *min, float *max){
    float num;
    for (int i = 1; i <= n; i++)
    {
        printf("Ingrese un numero: ");
        scanf("%f", &num);
        if (num > *max) 
            *max = n;
        else
            if (num < *min) *min = n;
    }
    
}
