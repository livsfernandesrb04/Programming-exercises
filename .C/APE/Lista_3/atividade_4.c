#include <stdio.h>

int main() {
    
    int i, j;
    float resultado;

    printf("Insira um número: ");
    scanf("%d", &i);
    
    do {
        printf("Insira um número: ");
        scanf("%d", &j);
        if (j == 0) {
            printf("VALOR INVÁLIDO\n");
        }
    } while (j == 0);
    
    resultado = (float)i / (float)j;

    printf("O resultado da divisão de %d por %d = %.2f", i, j, resultado);

    return 0;
}