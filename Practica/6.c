#include <stdio.h>
int main(){
    float km, m;
    printf("Ingrese una distancia en km: ");
    scanf("%f", &km);
    m = km / 1.61;
    printf("%f es equivalente a %f millas \n", km, m);
    return 0;
}