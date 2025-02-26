#include <stdio.h>

int main(){

    int contador = 0;
    float valor_mercadoria, valor_total = 0;
    char add_mercadoria;

    do {
       printf("Valor da mercadoria: ");
       scanf("%f", &valor_mercadoria); 

       valor_total += valor_mercadoria;
       contador++;

       printf("Deseja adicionar mais mercadorias? (S/N) ");
       scanf(" %c", &add_mercadoria); 

    } while (add_mercadoria == 'S' || add_mercadoria == 's');

    if (contador > 0)
    {
        float media = valor_total / (float)contador;

        printf("Valor total em estoque: %.2f\n", valor_total);
        printf("Média do valor das mercadorias: %.2f\n", media);
    }
    
    return 0;
}