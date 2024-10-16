#include <stdio.h>
#include <stdlib.h>

#define nPares(x, y) ((((x) % 2) == 0) + (((y) % 2) == 0))

int main(){
    int x = 5;
    int y = 3;
    printf("Pares: %d", nPares(x,y));
    return 1;
}