#include <stdio.h>
#include "istack.h"

int main()
{
    Stack *s = s_create();
    int num;

    printf("Ingrese numeros enteros (0 para terminar):");
    scanf("%d", &num);
    while (num != 0)
    {
        s_push(s, num);
        scanf("%d", &num);
    }

    printf("Desapilando elementos:\n");
    while (!s_empty(s))
    {
        printf("%d\n", s_pop(s));
    }

    return 0;
}