#include <stdio.h>
#include <stdlib.h>
#include "cabecalho.h"

int main(){

    int vetor[] = {9, 0, 30, 11, 25, 16, 50, 16, 32, 37};
    int tamanho = 10;

    printf("Array original: ");
    imprimir(vetor, tamanho);
    
    SelectionSort(vetor, tamanho);
    
    printf("Array ordenado: ");
    imprimir(vetor, tamanho);

    return 0;
}