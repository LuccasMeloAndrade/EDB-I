#include <stdio.h>
#include <stdlib.h>

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

void imprimir(int *vet, int comp){
    int i;
    for (i = 0; i < comp; i++)
    {
        printf("%d ", vet[i]);
    }
    printf("\n");
}


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