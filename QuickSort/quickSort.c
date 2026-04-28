#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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

void quickSort(int *v, int inicio, int fim){
    if (inicio < fim)
    {
        int posicao = particionar(v, inicio, fim);
        quickSort(v, inicio, posicao - 1);
        quickSort(v, posicao, fim);
    }
}

void preencher(int *v, int tam){
    int i;
    for ( i = 0; i < tam; i++)
    {
        v[i] = rand() % 50;
    }
    
}

void imprimir(int *v, int tam){
    int i;
    for ( i = 0; i < tam; i++)
    {
        printf("%d ", v[i]);
    }
    printf("\n");
}

int main(){

    int tam = 15;
    int vet[tam];

    srand(time(NULL));
    preencher(vet, tam);

    printf("Vetor original:\n");
    imprimir(vet, tam);

    quickSort(vet, 0, 14);

    printf("Vetor ordenado:\n ");
    imprimir(vet, tam);

    return 0;
}