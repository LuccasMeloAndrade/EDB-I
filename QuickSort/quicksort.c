#include <stdio.h>
#include <stdlib.h>
#include "cabecalho.h"

void quickSort(int *v, int inicio, int fim){
    if (inicio < fim)
    {
        int posicao = particionar(v, inicio, fim);
        quickSort(v, inicio, posicao - 1);
        quickSort(v, posicao, fim);
    }
}