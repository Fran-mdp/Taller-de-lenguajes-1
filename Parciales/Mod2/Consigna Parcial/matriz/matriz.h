#ifndef MATRIZ_H
#define MATRIZ_H

typedef float ** matriz;

matriz crear(int n);
float suma(matriz m, int n);
void liberar(matriz *m, int n);

#endif // MATRIZ_H
