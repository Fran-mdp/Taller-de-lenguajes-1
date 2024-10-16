#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PI 3.14159
#define AREA_CIRCULO(r) (PI * (r) * (r))

int main() {
    srand(time(0)); // semilla para generación de números aleatorios
    int i;
    for(i = 0; i < 10; i++) {
        int radio = rand() % 100 + 1; // generar un número aleatorio entre 1 y 100
        float area = AREA_CIRCULO(radio);
        printf("El área del círculo con radio %d es: %f\n", radio, area);
    }
    return 0;
}
