#include <stdio.h>
int main(){
    int edad;
    printf("Ingrese una edad: ");
    scanf("%d", &edad);
    if (edad >= 40)
        printf("Tiene %d años o más \n", 40); 
    else
        printf("Tiene menos de %d años \n", 40);
    return 0;
}