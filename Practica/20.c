#include <stdio.h>
int damePar();
int main(){
    int cant;
    printf("Ingrese cantidad de veces: ");
    scanf("%d", &cant);

    for (int i = 1; i <= cant; i++){
        printf("%d \n", damePar());
    }
}
int damePar(){
    static int par = -2;
    par += 2;
    return par;
}