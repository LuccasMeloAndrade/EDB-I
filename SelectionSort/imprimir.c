#include <stdio.h>
#include <stdlib.h>
#include "cabecalho.h"

void imprimir(int *vet, int comp){
    int i;
    for (i = 0; i < comp; i++)
    {
        printf("%d ", vet[i]);
    }
    printf("\n");
}