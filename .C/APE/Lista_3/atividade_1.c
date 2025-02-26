#include <stdio.h>

int main() {
    
    int i, j;
    float resultado;

    printf("Insira um número:\n");
    scanf("%d", &i);

    printf("Insira outro número:\n");
    scanf("%d", &j);

    while (j == 0)
    {
       printf("Insira um número diferente de zero:\n");
        scanf("%d", &j); 
    }
    
    resultado = (float)i / (float)j;

    printf("O resultado da divisão de %d por %d = %.2f\n", i, j, resultado);

    return 0;
}