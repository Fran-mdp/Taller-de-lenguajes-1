#include <stdio.h>
#include <math.h>
int main(){
    for (int i=1; i<=10; i++){
        printf("-Para %d: \n", i);
        printf("    Raiz cuadrada: %f \n", sqrt(i));
        printf("    El cuadrado: %f \n", pow(i,2));
        printf("    El cubo: %f \n", pow(i,3));
    }
    return 0;
}