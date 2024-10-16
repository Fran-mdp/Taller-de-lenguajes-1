#include <stdio.h>

typedef struct horaStruct{
    unsigned int hora : 5;
    unsigned int minutos : 6;
    unsigned int segundos : 5;
}hora;

void leerHora(hora *h);
void imprimirHora(hora h);

int main(){
    hora h;
    leerHora(&h);
    imprimirHora(h);
    return 0;
}

void leerHora(hora *h){
    unsigned int aux; // Variable auxiliar

    printf("Hora: ");
    scanf("%d", &aux);
    h->hora = aux;
    printf("Minutos: ");
    scanf("%d", &aux);
    h->minutos = aux;
    printf("Segundos: ");
    scanf("%d", &aux);
    h->segundos = aux / 2;
}

void imprimirHora(hora h){
    printf("Hora: %02u:%02u:%02u\n", h.hora, h.minutos, h.segundos * 2); // Multiplicar los segundos por 2 al imprimirlos
}
