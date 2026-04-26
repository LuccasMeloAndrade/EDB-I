#include <stdio.h>
#include <stdlib.h>
#include "cabecalho.h"

void preencherVetor(int *vet, int tam){
    int i;
    for ( i = 0; i < tam; i++)
    {
        vet[i] = rand() % 50;
    }
}
