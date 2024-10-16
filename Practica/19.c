#include <stdlib.h>
#include <stdio.h>
#include <time.h>
char nota(int);
int main(){
    srand(time(NULL));
    int num1,num2,cont,result;
    char calificacion;
    cont = 0;
    for (int i = 1; i <= 4; i++){
        num1 = rand() % (100 + 1);
        num2 = rand() % (100 + 1);
        printf("%d + %d = ", num1, num2);
        scanf("%d", &result);
        if (result == num1 + num2) cont++;
    }
    calificacion = nota(cont);
    printf("Ustede se ha sacado %c \n", calificacion);
}
char nota(int cont){
    switch(cont){
        case 0:{
            return 'E';
            break; 
        }
        case 1:{
            return 'D';
            break;
        }
        case 2:{
            return 'C';
            break;
        }
        case 3:{
            return 'B';
            break;
        }
        case 4:{
            return 'A';
            break;
        }
    }
}

