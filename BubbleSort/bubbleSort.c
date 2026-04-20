#include <stdio.h>
#include <stdlib.h>

void Bubble(int *vetor, int tamanho){
    int i, j;

    for(j = 0; j < tamanho; j++){
        int troca = 0;
        for (i = 0; i < tamanho - 1 - j; i++) {
            if (vetor[i] > vetor[i + 1]){
                int aux;
                aux = vetor[i];
                vetor[i] = vetor[i + 1];
                vetor[i + 1] = aux;
                troca++;
            }
            
        }
        if(troca == 0) break;
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

    int vetor[] = {5, 3, 1, 4, 8};
    int tam = 5;

    imprimir(vetor, tam);
    Bubble(vetor, tam);
    imprimir(vetor, tam);

    return 0;
}