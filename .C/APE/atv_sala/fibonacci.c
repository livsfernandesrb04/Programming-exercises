//Faça um programa que apresente a sequencia de fibonacci até uma posição apresentada pelo usuário

#include <stdio.h>

int main() {

    int posicao, i, atual = 1, anterior = 0, antanterior = 0;

    printf("Insira a posição que a sequencia deve ir: ");
    scanf("%d", &posicao);

    printf("1 --> %d\n", atual);

    for(i = 2; i <= posicao; i++)
    {
        antanterior = anterior;
        anterior = atual;
        atual = anterior + antanterior;
        printf("%d --> %d\n", i, atual);
    }

    return 0;
}