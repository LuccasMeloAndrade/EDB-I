#include <stdio.h>
#include <stdlib.h>
#include "cabecalho.h"

void mergeSort(int *v, int inicio, int fim){
    if (inicio < fim)   
    {
        int meio = inicio + (fim - inicio) / 2;
        mergeSort(v, inicio, meio);
        mergeSort(v, meio + 1, fim);
        merge(v, inicio, meio, fim);
    }   
}