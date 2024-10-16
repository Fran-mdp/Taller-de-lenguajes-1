#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct nodo
{
    char dato[100];
    struct nodo *sig;
};

void inicializar(struct nodo **);
void agregarFinal(struct nodo **lista, char dato[]);
void agregarInicio(struct nodo **lista, char dato[]);
void imprimirElementos(struct nodo *lista);
void liberarMemoria(struct nodo **lista);
void cargarDiccionario(struct nodo **lista, FILE *f);
int buscarPalabra(struct nodo *lista, char palabra[]);

int main()
{
    struct nodo *lista;
    char palabra[100];
    FILE *f;
    f = fopen("diccionario.txt", "r");
    if (f == NULL)
    {
        printf("\nError al abrir archivo fuente\n");
        return 1;
    }

    inicializar(&lista);
    cargarDiccionario(&lista, f);
    printf("Diccionario cargado: \n");
    imprimirElementos(lista);

    printf("\nIngrese una palabra: ");
    scanf("%s", palabra);

    while (strcmp(palabra, "ZZZ") != 0)
    {
        if (buscarPalabra(lista, palabra))
        {
            printf("La palabra %s se encuentra en el diccionario\n", palabra);
        }
        else
        {
            printf("La palabra %s no se encuentra en el diccionario\n", palabra);
        }
        printf("\nIngrese una palabra: ");
        scanf("%s", palabra);
    }

    fclose(f);
    liberarMemoria(&lista);

    return 0;
}

void inicializar(struct nodo **lista)
{
    *lista = NULL;
}

void imprimirElementos(struct nodo *lista)
{
    struct nodo *aux = lista;
    while (aux != NULL)
    {
        printf("%s \n", aux->dato);
        aux = aux->sig;
    }
}

void liberarMemoria(struct nodo **lista)
{
    struct nodo *aux;

    while (*lista != NULL)
    {
        aux = *lista;
        *lista = (*lista)->sig;
        free(aux);
    }
}

void cargarDiccionario(struct nodo **lista, FILE *f)
{
    char palabra[100];
    while (fscanf(f, "%s", palabra) == 1)
    {
        agregarFinal(lista, palabra);
    }
}

int buscarPalabra(struct nodo *lista, char palabra[])
{
    struct nodo *aux = lista;
    while (strcmp(palabra, aux->dato)>0 && aux!=NULL)
    {
        aux = aux->sig;
    }
    if (aux != NULL && strcmp(palabra, aux->dato) == 0)
    {
        return 1;
    }
    return 0;
}

void agregarInicio(struct nodo **lista, char dato[])
{
    struct nodo *nuevo = (struct nodo *)malloc(sizeof(struct nodo));
    strcpy(nuevo->dato, dato);
    nuevo->sig = *lista;
    *lista = nuevo;
}

void agregarFinal(struct nodo **lista, char dato[])
{
    struct nodo *nuevo = (struct nodo *)malloc(sizeof(struct nodo));
    struct nodo *aux = *lista;
    if (*lista == NULL)
    {
        agregarInicio(lista, dato);
    }
    else
    {
        while ((aux)->sig != NULL)
        {
            aux = aux->sig;
        }
        strcpy(nuevo->dato,dato);
        nuevo->sig = NULL;
        aux->sig = nuevo;
    }
}
