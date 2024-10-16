#include <stdio.h>
int main(){
    int total = 0;
    int x = 1;
    while (x <= 10){
        total += x;
        ++x; 
    }
    printf("Total = %d \n", total);
    return 0;
}