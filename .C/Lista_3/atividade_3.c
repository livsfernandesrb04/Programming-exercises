#include <stdio.h>

int main() {
    
    int i, j = 0;
    float resultado;

    printf("Insira um número: ");
    scanf("%d", &i);
    printf("Insira outro número: ");
    scanf("%d", &j);

    while (j == 0)
    {
        printf("VALOR INVALIDO\n");
        printf("Insira outro número: ");
        scanf("%d", &j);
    }
    
    resultado = (float)i / (float)j;

    printf("O resultado da divisão de %d por %d = %.2f", i, j, resultado);

    return 0;
}