#include <stdio.h> 
#define MOSTRAR 1
int main() { 
    int i;
    for (i=10; i>5; i--) {   
        #ifdef MOSTRAR         
            printf("%d(%d)  ",i, MOSTRAR);         
            #undef MOSTRAR
        #else
            #define MOSTRAR 0
            printf("%d", MOSTRAR); //no imprime esto
        #endif
    }
    return 0; 
}