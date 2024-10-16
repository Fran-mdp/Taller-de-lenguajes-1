#include <stdio.h>
#define DIMF 5

void swap(int *, int);
void imprimir(int [], int );
    
int main(){
    int vector[DIMF] = {1,2,3,4,5};
    int *p = vector;
    imprimir(vector,DIMF);
    swap(p,DIMF);
    imprimir(vector,DIMF);
}

void swap(int *p, int dimF){
    int aux;
    int *fin = p+dimF-1;
    while(p!=fin && p<fin){
        aux = *p;
        *p = *fin;
        *fin = aux;
        fin--;
        p++;
    }

}

void imprimir(int arreglo[], int dimF){
    for(int i=0;i<dimF;i++){
        printf("%d \n", arreglo[i]);
    }
    printf("\n");
}