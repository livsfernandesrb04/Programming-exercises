#include <stdio.h>

int main() {

    int mercadoriaEstoque;
    float mercadoriaValor, valorTotal = 0;

    printf("Insira o total de mercadorias no estoque: ");
    scanf("%d", &mercadoriaEstoque);

    for (int i = 1; i <= mercadoriaEstoque; i++) {
        printf("Insira o valor da mercadoria: ");
        scanf("%f", &mercadoriaValor);
        valorTotal += mercadoriaValor;
    }
    
    float valorMedio = valorTotal / mercadoriaEstoque;

    printf("Valor total das mercadorias em estoque: %.2f\n", valorTotal);
    printf("Media de valor das mercadorias: %.2f\n", valorMedio);
    
    return 0;
}