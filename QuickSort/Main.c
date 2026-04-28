#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "cabecalho.h"

void preencher(int *v, int tam){
    int i;
    for ( i = 0; i < tam; i++)
    {
        v[i] = rand() % 50;
    }
    
}

void imprimir(int *v, int tam){
    int i;
    for ( i = 0; i < tam; i++)
    {
        printf("%d ", v[i]);
    }
    printf("\n");
}

int main(){

    int tam = 25;
    int vet[tam];

    srand(time(NULL));
    preencher(vet, tam);

    printf("Vetor original:\n");
    imprimir(vet, tam);

    quickSort(vet, 0, tam - 1);

    printf("Vetor ordenado:\n ");
    imprimir(vet, tam);

    return 0;
}