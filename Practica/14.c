#include <stdio.h>
int invertir(int);
int main(){
    int num;
    printf("Ingrese un numero: ");
    scanf("%d", &num);
    int inv = invertir(num);
    printf("El numero %d invertido es: %d \n", num, inv);
    return 0;
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