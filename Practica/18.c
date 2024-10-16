#include <stdlib.h>
#include <stdio.h>
#include <time.h>
int main(){
    int num;
    srand(time(NULL));
    for (int i = 1; i <= 15; i++){
        num = rand();
        printf("Numero %d: %d \n", i, num);
    }
    return 0;
}