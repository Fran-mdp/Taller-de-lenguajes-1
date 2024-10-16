#include <stdio.h> 
#include <stdlib.h>
#define SIZE 25
void imprimir(int * v, int tamanio){ 
    int i;
    for (i=0; i<tamanio; i++){ 
        printf("v[%d]= %d\n", i, v[i]);
    } 
}
int main(){
    int v[SIZE];
    imprimir(v, SIZE);
    return 0; 
}