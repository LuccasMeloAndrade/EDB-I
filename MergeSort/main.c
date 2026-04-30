#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "cabecalho.h"

int main(){
    int tam = 5;
    int vetor[tam];

    srand(time(NULL));
    preencherVetor(vetor, tam);

    printf("Vetor original:\n");
    imprimir(vetor, tam);

    mergeSort(vetor, 0, tam - 1);

    printf("Vetor ordenado:\n");
    imprimir(vetor, tam);

    return 0;
}