#include <stdio.h>
int esPrimo(int);
int main(){
    int n;
    int primos = 0;          /* Preguntar que onda con el static y eso. Si conviene o no*/
    while (primos < 5){
        printf("Ingrese un numero: ");
        scanf("%d", &n);
        if (esPrimo(n)){
            primos++;
        }
    }


}

int esPrimo(int n){
    int booleano = 1;

    for(int i=2; i<=n-1; i++){
        if((n % i) == 0){
            booleano = 0;
            break;
        }
    }
    return booleano;
}