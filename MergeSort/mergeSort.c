#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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

void mergeSort(int *v, int inicio, int fim){
    if (inicio < fim)   
    {
        int meio = inicio + (fim - inicio) / 2;
        mergeSort(v, inicio, meio);
        mergeSort(v, meio + 1, fim);
        merge(v, inicio, meio, fim);
    }   
}

void imprimir(int *vet, int tam){
    int i;
    for ( i = 0; i < tam; i++)
    {
        printf("%d ", vet[i]);
    }
    printf("\n");
}

void preencherVetor(int *vet, int tam){
    int i;
    for ( i = 0; i < tam; i++)
    {
        vet[i] = rand() % 50;
    }
}


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