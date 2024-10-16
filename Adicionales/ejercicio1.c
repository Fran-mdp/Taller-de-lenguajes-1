#include <stdio.h>
void calcula_minimos(int *,  int *, int *, int *, int , int );
int aves, paises, cod_pais, min1, min2, cod1, cod2;
float porcentaje;
int cont;
int main(){
    paises = 7;
    min1 = 999999;
    min2 = 999999;
    cont = 0;
    for (int i = 1; i <= paises; i++){
        printf("Ingrese el codigo del pais: ");
        scanf("%d", &cod_pais);
        printf("Ingrese la cantidad de aves: ");
        scanf("%d", &aves);
        calcula_minimos(&min1, &min2, &cod1, &cod2, cod_pais, aves);
        if (aves > 40) cont++;
    }
    printf("%d es el pais que menos tiene con %d aves. \n", cod1, min1);
    printf("%d es el segundo pais que menos tiene con %d aves \n", cod2, min2);
    porcentaje = (float)cont * 100 / paises;
    printf("El porcentaje de paises con mas de 40 aves es de %f \n", porcentaje);
    return 0;
}
void calcula_minimos(int *min1, int *min2, int *cod1, int *cod2, int cod_pais, int aves){
    if (aves <= *min1){
        *min2 = *min1;
        *cod2 = *cod1;
        *min1 = aves;
        *cod1 = cod_pais;
    }
    else if (aves < *min2){
        *min2 = aves;
        *cod2 = cod_pais;
    }
}
