#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, contador_divisores = 0;
    int *divisores = NULL;

    printf("Ingrese un numero entero: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            contador_divisores++;
            divisores = (int *)realloc(divisores, contador_divisores * sizeof(int));
            divisores[contador_divisores - 1] = i;
        }
    }

    printf("Divisores de %d: ", n);
    for (i = 0; i < contador_divisores; i++) {
        printf("%d ", divisores[i]);
    }

    free(divisores);
    printf("\n");
    return 0;
}
