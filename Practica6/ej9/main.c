#include <stdio.h>
#include "imath.h"

int main()
{
    int numero;
    printf("Ingresa un número (0 para salir): ");
    scanf("%d", &numero);

    while (numero != 0)
    {
        if (par(numero))
        {
            printf("Cuadrado: %d\n", cuadrado(numero));
            printf("Cubo: %d\n", cubo(numero));
        }
        else if (impar(numero))
        {
            printf("Factorial: %d\n", factorial(numero));
        }
        printf("Ingresa otro número (0 para salir): ");
        scanf("%d", &numero);
    }

    return 0;
}
