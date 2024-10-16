#include <stdio.h>
#include <stdlib.h>

struct nodo {
    int dato;
    struct nodo * sig;
};

struct listaA{              //Lista mas pro pero no la use
    struct nodo * inicio;
    struct nodo * final;
};

void inicializar(struct nodo**);
void agregarInicio(struct nodo **, int);
void agregarFinal(struct nodo **, int);
int cantElementos(struct nodo * lista);
void imprimirElementos(struct nodo * lista);
void eliminarElementos(struct nodo ** lista);


int main(){
    struct nodo * lista;
    struct nodo * lista2;
    printf("Lista 1: \n");
    inicializar(&lista);
    agregarInicio(&lista,1);
    agregarInicio(&lista,2);
    agregarInicio(&lista,3);
    agregarInicio(&lista,4);
    imprimirElementos(lista);
    eliminarElementos(&lista);

    printf("\nLista 2: \n");
    inicializar(&lista2);
    agregarFinal(&lista2,1);
    agregarFinal(&lista2,2);
    agregarFinal(&lista2,3);
    agregarFinal(&lista2,4);
    imprimirElementos(lista2);
    eliminarElementos(&lista2);

    return 0;
}

void inicializar( struct nodo ** lista){
    *lista = NULL;
}

void agregarInicio(struct nodo ** lista, int dato){
    struct nodo * nuevo = (struct nodo*) malloc(sizeof(struct nodo));
    nuevo->dato = dato;
    nuevo->sig = *lista;
    *lista = nuevo;
}

void agregarFinal(struct nodo ** lista, int dato){
    struct nodo * nuevo = (struct nodo *) malloc(sizeof(struct nodo));
    struct nodo * aux = *lista;
    if (*lista == NULL){
        agregarInicio(lista,dato);
    }
    else{
        while((aux)->sig != NULL){
            aux = aux-> sig;
        }
        nuevo->dato = dato;
        nuevo->sig = NULL;
        aux->sig = nuevo;
    }
}

int cantElementos(struct nodo * lista){
    int cant = 0;
    struct nodo *aux = lista;
    while(aux != NULL){
        aux = aux->sig;
        cant++;
    }
    return cant;
}

void imprimirElementos(struct nodo * lista){
    struct nodo * aux = lista;
    while(aux != NULL){
        printf("%d \n", aux->dato);
        aux = aux->sig;
    }
}

void eliminarElementos(struct nodo ** lista) {
    struct nodo *aux;

    while (*lista != NULL) {
        aux = *lista;
        *lista = (*lista)->sig;
        free(aux);
    }
}


