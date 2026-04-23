#include <stdio.h>
#include <stdlib.h>

int buscaseq(int *v, int tam, int chave){
    int i;

    for (i = 0; i < tam; i++)
    {
        if (v[i] == chave)
        {
            return i;
        }
    }

    return -1;
}

int main() {
    int vet[10] = {12, 43, 56, 89, 11, 5, 90, 55, 81, 7};
    int quant = 10, posicao;

    posicao = buscaseq(vet, quant, 0);

    if (posicao != -1)
    {
        printf("A chave encontra-se na posição: %d\n", posicao);
    }
    else {
        printf("Chave não encontrada\n");
    }

    return 0;
}
