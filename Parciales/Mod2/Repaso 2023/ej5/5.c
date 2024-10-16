#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct dest
{
    int codProv;
    int codLoc;
    char nomLoc[30];
    int nHab;
} destino;

int main(){
    destino d, dMax;
    FILE * habitantes;
    FILE * binario;
    habitantes = fopen("Habitantes.txt", "r");
    binario = fopen("binario.bin", "wb");
    if (habitantes == NULL || binario == NULL){
        printf("Error al abrir archivo\n");
        return 0;
    }
    while(fscanf(habitantes, "%d %d %s %d", &d.codProv, &d.codLoc, d.nomLoc, &d.nHab) == 4){
        fwrite(&d, sizeof(destino), 1, binario);
    }
    fclose(habitantes);
    fclose(binario);

    dMax.nHab = -1;
    binario = fopen("binario.bin", "rb");
    if (binario == NULL){
        printf("Error al abrir el archivo\n");
        return 0;
    }

    while(fread(&d, sizeof(destino),1,binario) == 1){
        if(d.nHab > dMax.nHab){
            dMax.nHab = d.nHab;
            dMax.codLoc = d.codLoc;
            strcpy(dMax.nomLoc,d.nomLoc);
        }
    }
    printf("La localidad con mas habitantes es: %s(%d)", dMax.nomLoc, dMax.codLoc);
    return 1;
}