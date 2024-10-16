
#include <stdio.h> 
int main(){
    char a;
    char b;
    printf("Ingrese el primer caracter: "); 
    scanf("%c", &a);
    printf("Se leyó el caracter: %c\n", a);

    printf("Ingrese el segundo caracter: "); 
    scanf(" %c", &b);
    printf("Se leyó el caracter: %c\n", b);
    
    return 0;
}