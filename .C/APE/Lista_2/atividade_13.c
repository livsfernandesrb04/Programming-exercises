#include <stdio.h>

int main() {

    //Ler a quantidade atual em estoque, quantidade máx  e quantidade min de estoque.
    int quant_atual;
    const int quant_MAX;
    const int quant_MIN;
    float quant_media;

    printf("Digite a quantidade atual em estoque: ");
    scanf("%i", &quant_atual);

    printf("Digite a quantidade máxima de estoque: ");
    scanf("%i", &quant_MAX);

    printf("Digite a quantidade mínima de estoque: ");
    scanf("%i", &quant_MIN);

    //Calcular a quant. média de estoque
    quant_media = (quant_MAX + quant_MIN) / 2;

    //Identificar a necessidade de fazer a compra ou não de estoque
    if (quant_atual >= quant_media)
    {
        printf("Não efetuar compra\n");
    }
    else
    {
        printf("Efetuar compra\n");
    }
    
    return 0;
}