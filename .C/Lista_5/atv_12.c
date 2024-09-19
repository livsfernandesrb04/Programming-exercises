#include <stdio.h>
int main(){

    int vetor[30];
    int a, contador = 0;

    for (int i = 0; i < 30; i++)
    {
        printf("Insira um número: \n");
        scanf("%d", &vetor[i]);
    }
    printf("Insira outro número: \n");
    scanf("%d", &a);

    for (int i = 0; i < 30; i++)
    {
        if (a == vetor[i])
        {
            contador++;
        }
    }
    
    printf("O número aparece no vetor %d vezes", contador);

    return 0;
}