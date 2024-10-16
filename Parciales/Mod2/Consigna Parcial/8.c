#include <stdio.h>
#include <stdlib.h>

    int
    main(int argc, char *argv[])
{
    if (argc < 2)
    {
        printf("Error: Debe ingresar al menos un número.\n");
        return 1;
    }

    float promedio = 0;
    for (int i = 1; i < argc; i++)
    {
        promedio += atoi(argv[i]);
    }

    promedio /= (argc - 1);
    printf("El promedio es: %.2f\n", promedio);

    return 0;
}