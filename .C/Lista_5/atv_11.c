#include <stdio.h>

int main(){

    int V1[15], V2[15];
    int contador = 0;

    for (int i = 0; i < 15; i++)
    {
        printf("Insira os números do vetor V1:");
        scanf("%d", &V1[i]);
    }

    for (int i = 0; i < 15; i++)
    {
        printf("Insira os números do vetor V2:");
        scanf("%d", &V2[i]);
    }

    for (int i = 0; i < 15; i++) {
        if (V1[i] == V2[i]) {
            contador++;
        }
    }
    printf("Os números aparecem nos vetores na mesma posição %d vezes", contador);

    return 0;
}