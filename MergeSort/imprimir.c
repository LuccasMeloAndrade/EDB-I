#include <stdio.h>
#include <stdlib.h>
#include "cabecalho.h"

void imprimir(int *vet, int tam){
    int i;
    for ( i = 0; i < tam; i++)
    {
        printf("%d ", vet[i]);
    }
    printf("\n");
}