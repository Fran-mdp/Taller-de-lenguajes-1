#include <stdio.h>
#include <math.h>
int binario(int);
int main(){
    int num;
    printf("Ingrese un numero: ");
    scanf("%d", &num);
    int bin = binario(num);
    printf("%d en binario es %d \n", num, bin);
}

int binario(int num, int cont, int bin){
    static int cont = 1;
    static int bin = 0;
    if(num != 0){
        
    }
    return
}