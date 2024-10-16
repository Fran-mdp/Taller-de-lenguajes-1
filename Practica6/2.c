#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    if (argc != 5){
        printf("Sos un boludo, no pusiste 4");
        return 0;       // :(
    }
    else{
        int tot = 0;
        float promedio;
        for(int i=1; i < argc; i++){
            tot += atoi(argv[i]);
        }
        promedio = tot/(argc-1);
        printf("Promedio: %f\n", promedio);
        return 1;
    }
}