#include <stdlib.h>
#include <stdio.h>

int buscaBinaria(int *vetor, int tamanho, int chave){
    int inicio = 0, fim = tamanho - 1;
    while(inicio <= fim){
        int meio = (inicio + fim) / 2;

        if(vetor[meio] == chave) return meio;  // encontrou
        else if(vetor[meio] < chave){
            inicio = meio + 1;
        }
        else {
            fim = meio - 1;
        }
    }
    return -1;
}

int main(){
    int vet[] = {2,5,8,12,16,23,38,56};
    int tam = 8, chave;

    printf("Digite a chave: ");
    scanf("%d", &chave);

    int pos = buscaBinaria(vet, tam, chave);

    if(pos != -1)
        printf("A chave está na posição: %d\n", pos);
    else
        printf("Chave não encontrada\n");

    return 0;
}