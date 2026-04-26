#include <stdlib.h>
#include <stdio.h>

void insertionSort(int *vet, int tam){
    int i;

    for ( i = 1; i < tam; i++)
    {
        int aux, j = i;
        aux = vet[j];

        while (j > 0 && aux < vet[j - 1])
        {
            vet[j] = vet[j - 1];
            j--;
        }
        vet[j] = aux;
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
    int vetor[] = {7, 3, 5, 8, 2};
    int quant = 5;

    imprimir(vetor, quant);
    insertionSort(vetor, quant);
    imprimir(vetor, quant);

    return 0;
}