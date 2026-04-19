#include <stdio.h>
#include <stdlib.h>

int buscaBinariaRecursiva(int *vetor, int inicio, int fim, int chave){
    if(inicio > fim) return -1;

    int meio = inicio + (fim - inicio) / 2;

    if(vetor[meio] == chave)
        return meio;
    else if(vetor[meio] < chave)
        return buscaBinariaRecursiva(vetor, meio + 1, fim, chave);
    else
        return buscaBinariaRecursiva(vetor, inicio, meio - 1, chave);
}

int main(){
    int vet[] = {2,5,8,12,16,23,38,56};
    int tam = 8, chave;

    printf("Digite a chave: ");
    scanf("%d", &chave);

    int pos = buscaBinariaRecursiva(vet, 0, tam - 1, chave);

    if(pos != -1)
        printf("A chave está na posição: %d\n", pos);
    else
        printf("Chave não encontrada\n");

    return 0;
}