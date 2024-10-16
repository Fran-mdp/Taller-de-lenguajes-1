#include <stdlib.h>
#include <stdio.h>
int main(){
    for (int i = 0; i < 3; i++){
        #define FLAG i
        #if FLAG == 0
                printf("Flag 0\n");
        #elif FLAG == 1
                printf("Flag 1\n");
        #else
                printf("Flag 2\n");
        #endif
    }
    return 1;
}
