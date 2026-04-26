#include <stdio.h>
#include <stdlib.h>
#include "cabecalho.h"

void merge(int *vet, int inicio, int meio, int fim){ // Função para intercalar duas subpartes ordenadas do vetor
    int i, j, k;
    int n1 = meio - inicio + 1;
    int n2 = fim - meio;

    int *esquerda = malloc(n1 * sizeof(int));
    int *direita = malloc(n2 * sizeof(int));

    for ( i = 0; i < n1; i++)
    {
        esquerda[i] = vet[inicio + i];
    }
    for ( j = 0; j < n2; j++)
    {
        direita[j] = vet[meio + j + 1];
    }
    
    i = 0, j = 0, k = inicio;
    while (i < n1 && j < n2) // intercalação
    {
        if (esquerda[i] <= direita[j])
        {
            vet[k++] = esquerda[i++];
        }
        else
        {
            vet[k++] = direita[j++];
        }
        
        
    }

    while (i < n1) // copia os elementos restantes
    {
        vet[k++] = esquerda[i++];
    }
    while (j < n2)
    {
        vet[k++] = direita[j++];
    }
    
    free(esquerda);
    free(direita);
}