#include <stdio.h>
int main(){

    int Q[20];
    int maior_num = 0, posicao;

    for (int i = 0; i < 20; i++)
    {
        do
        {
            printf("Insira um número positivo que estará na %d posição: ", i);
            scanf("%d", &Q[i]);
        } while (Q[i] <= 0);
    }

    for (int i = 0; i < 20; i++)
    {
        if (Q[i] > maior_num)
        {
            maior_num = Q[i];
            posicao = i;
        }
    }
    
    printf("O maior número em Q é %d e sua posição é %d", maior_num, posicao);
    return 0;
}