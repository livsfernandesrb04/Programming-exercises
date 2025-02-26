#include <stdio.h>
int main(){

    int Q[20];
    int menor_num, posicao;

    for (int i = 0; i < 20; i++)
    {
        do
        {
            printf("Insira um número positivo que estará na %d posição: ", i);
            scanf("%d", &Q[i]);
        } while (Q[i] <= 0);
    }
    menor_num = Q[1];

    for (int i = 0; i < 20; i++)
    {
        if (Q[i] < menor_num)
        {
            menor_num = Q[i];
            posicao = i;
        }
    }
    
    printf("O menor número em Q é %d e sua posição é %d", menor_num, posicao);
    return 0;
}