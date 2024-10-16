#include "imath.h"

int potencia(int x, int y)
{
    int resultado = 1;
    for (int i = 0; i < y; i++)
    {
        resultado *= x;
    }
    return resultado;
}

int cuadrado(int x)
{
    return x * x;
}

int cubo(int x)
{
    return x * x * x;
}

int absoluto(int i)
{
    return i >= 0 ? i : -i;
}

int factorial(int i)
{
    if (i == 0)
    {
        return 1;
    }
    int factorial = 1;
    for (int j = 1; j <= i; j++)
    {
        factorial *= j;
    }
    return factorial;
}

int sumatoria(int i)
{
    int suma = 0;
    for (int j = 0; j <= i; j++)
    {
        suma += j;
    }
    return suma;
}

int multiplo(int x, int y)
{
    return x % y == 0 ? 1 : 0;
}

int divisor(int x, int y)
{
    return y % x == 0 ? 1 : 0;
}

int par(int i)
{
    return i % 2 == 0 ? 1 : 0;
}

int impar(int i)
{
    return i % 2 != 0 ? 1 : 0;
}
