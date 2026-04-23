#include <stdio.h>
#include <stdlib.h>
#include "cabecalho.h"

void SelectionSort(int *vet, int tam){
    int i, j, menor, posMenor, aux;
    
    for(i = 0; i < tam - 1; i++){
        posMenor = i;
        menor = vet[i];
        
        for(j = i + 1; j < tam; j++){
            if(vet[j] < menor){
                menor = vet[j];
                posMenor = j;
            }
        }
        
        if(posMenor != i){
            aux = vet[i];
            vet[i] = vet[posMenor];
            vet[posMenor] = aux;
        }
    }
}
