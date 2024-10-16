#include <stdio.h>
#include <math.h>
int binario(int);
int invertir(int);
int main(){
    int num;
    printf("Ingrese un numero: ");
    scanf("%d", &num);
    int bin = binario(num);
    printf("%d en binario es %d \n", num, bin);
}
int binario(int num){
    int bin = 0;
    int cont = 0;
    int aux = num;
    while((aux % 2) == 0){
        cont++;
        aux /= 2;
    }
    while(num != 0){
        bin *= 10;
        bin += (num % 2);
        num /= 2;
    }
    bin = invertir(bin);
    bin = bin * pow(10,cont);
    return bin;
}

int invertir(int num){
    int dig, inv;
    inv = 0;
    
    while(num != 0){
        dig = num % 10;
        inv *= 10;
        inv += dig;
        num /= 10;
    }
    return inv;
}