#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct nodo
{
    char dato[100];
    struct nodo *sig;
};

void inicializar(struct nodo **);
void apilar(struct nodo **, char[]);
void imprimirElementos(struct nodo *lista);
void liberarMemoria(struct nodo **lista);
void cargarLista(struct nodo **lista);
char *desapilar(struct nodo **lista);

int main()
{
    struct nodo *lista;
    char palabra[100];
    char *dicc;
    int encontrado;
    FILE *f;
    f = fopen("diccionario.txt", "r");
    if (f == NULL)
    {
        printf("\nError al abrir archivo fuente\n");
        return 1;
    }
    inicializar(&lista);
    cargarLista(&lista);
    printf("Lista 1: \n");
    imprimirElementos(lista);

    while (lista != NULL)
    {
        encontrado = 0;
        dicc = desapilar(&lista);
        fseek(f, 0, SEEK_SET); // Restart file reading
        while (fscanf(f, "%s", palabra) == 1)
        {
            if (strcmp(palabra, dicc) == 0)
            {
                printf("%s se encuentra en el diccionario\n", dicc);
                encontrado = 1;
                break;
            }
        }
        if (encontrado == 0)
        {
            printf("%s no se encuentra en el diccionario\n", dicc);
        }
        free(dicc);
    }

    fclose(f);

    liberarMemoria(&lista);
    imprimirElementos(lista);

    return 0;
}

void inicializar(struct nodo **lista)
{
    *lista = NULL;
}

void apilar(struct nodo **lista, char dato[])
{
    struct nodo *nuevo = (struct nodo *)malloc(sizeof(struct nodo));
    strcpy(nuevo->dato, dato);
    nuevo->sig = *lista;
    *lista = nuevo;
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

void cargarLista(struct nodo **lista)
{
    char string[100];
    printf("Ingrese una palabra: ");
    scanf("%s", string);
    while (strcmp(string, "ZZZ"))
    {
        apilar(lista, string);
        printf("Ingrese una palabra: ");
        scanf("%s", string);
    }
}

char *desapilar(struct nodo **lista)
{
    if (*lista == NULL)
        return NULL; // return null if list is empty

    struct nodo *aux;
    aux = *lista;

    char *dicc = malloc(sizeof(char) * 100); // allocate memory for dicc
    if (dicc == NULL)
        return NULL; // return null if memory allocation failed

    strcpy(dicc, aux->dato);

    *lista = aux->sig; // update the start of the list
    free(aux);         // free the memory of the popped node

    return dicc;
}
