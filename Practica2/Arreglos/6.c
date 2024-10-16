#include <stdio.h>
void cantDigitos(int);

int main(){
    int num;
    printf("Ingrese un numero: ");
    scanf("%d", &num);
    cantDigitos(num);
    return 0;
}

void cantDigitos(int num){
    int dig,aux,i,cont;
    aux = num;
    for(i=0;i<=9;i++){
        cont = 0;
        if((num == 0) && (i==0))cont++;
        while(num!=0){
            dig = num % 10;
            num /= 10;
            if (dig == i) cont++;
        }
        printf("La cantidad de veces que aparece el numero %d es: %d \n", i, cont);
        num = aux;
    }
}