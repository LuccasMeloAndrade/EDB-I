#include <stdio.h>
#include <stdlib.h>
#include "cabecalho.h"

int particionar(int *v, int inicio, int fim){
    int pivo = (v[inicio] + v[fim] + v[(inicio + fim) / 2]) / 3;

    while (inicio < fim)
    {
        while (inicio < fim && v[inicio] <= pivo)
        {
            inicio++;
        }
        while (inicio < fim && v[fim] > pivo)
        {
            fim--;
        }
        int aux;
        aux = v[inicio];
        v[inicio] = v[fim];
        v[fim] = aux;

    }
    return inicio;
}

