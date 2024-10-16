#include <stdio.h>
#include <stdlib.h>
#define DIMFC 3
#define DIMFF 3

void multEscalar(int [][DIMFC], int, int, int);

int main(){
    int num;
    int A[DIMFF][DIMFC];
    int c = 2;
    for(int i=0; i<=DIMFF-1; i++){
        for(int j=0; j<=DIMFC-1; j++){
            printf("Ingrese un numero para (%d,%d): ", i,j);
            scanf("%d",&num);
            A[i][j]=num;
        }
    }
    multEscalar(A,DIMFF,DIMFC,c);
    for(int i=0; i<=DIMFF-1; i++){
        for(int j=0; j<=DIMFC-1; j++){
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    return 0;
}

void multEscalar(int matriz[][DIMFC], int dimFf, int dimFc, int c){
    for(int i=0; i<=dimFf-1; i++){
        for(int j=0; j<=dimFc-1; j++){
            matriz[i][j]*=c;
        }
    }
}