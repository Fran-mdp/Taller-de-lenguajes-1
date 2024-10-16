#include <stdio.h>

typedef enum {VIBRAR = 1, LINTERNA = 2, TRASERA = 4, FRONTAL = 8, DATOS = 16, GPS = 32, WIFI = 64, BLUETOOH = 128}dispositivos;

const dispositivos prendidos = 255;
const dispositivos apagados = 0;
void prender(dispositivos *, dispositivos);
void apagar(dispositivos *, dispositivos);

int main(){
    dispositivos todos = apagados;
    printf("%d \n", todos);
    prender(&todos, FRONTAL);
    printf("%d \n", todos);
    prender(&todos, GPS);
    printf("%d \n", todos);
    apagar(&todos, FRONTAL);
    printf("%d \n", todos);
    return 0;
}

void prender (dispositivos *d, dispositivos dis){
    *d |= dis;
}

void apagar(dispositivos *d, dispositivos dis){
    *d &= ~dis;
}