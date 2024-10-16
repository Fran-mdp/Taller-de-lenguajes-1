#include <stdio.h>
int main(){
    int cont, espacio;
    espacio = 4;
    for(int j=1; j<=9; j+=2){
        cont = j;
        for (int i = 1; i <= espacio; i++)
        {
            printf(" ");
        }
        espacio--;
        while (cont != 0){
            printf("%c", '*');
            cont--;
        }
        
        printf("\n");
    }
    espacio = 1;
    for(int j=7; j>=1; j-=2){
        cont = j;
        for (int i = 1; i <= espacio; i++)
        {
            printf(" ");
        }
        espacio++;
        while (cont != 0){
            printf("%c", '*');
            cont--;
        }
        printf("\n");
    }
    return 0;
}