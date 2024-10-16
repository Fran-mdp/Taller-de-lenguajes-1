#include <stdio.h>
int main(){
    for(int i = 1; i <= 50; i++){
        if(i % 5 == 0) printf("El numero %d es multiplo de 5 \n", i);
    }
    return 0;
}