#include <stdlib.h>
#include <stdio.h>

void insertionSortRecursivo(int *vet, int tam, int fim){
    if (fim >= tam)
    {
        return;
    }
    int aux, j = fim;
    aux = vet[j];

    while (j > 0 && aux < vet[j - 1])
    {
        vet[j] = vet[j - 1];
        j--;
    }
    vet[j] = aux;
    insertionSortRecursivo(vet, tam, fim + 1);
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
    insertionSortRecursivo(vetor, quant, 1);
    imprimir(vetor, quant);

    return 0;
}