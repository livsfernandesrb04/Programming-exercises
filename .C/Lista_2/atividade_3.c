#include <stdio.h>

int main() {
    
    int quant_de_macas;
    float preco_final;

    //Receber a quantidade de maças compradas
    printf("Insira a quantidade de maçãs compradas: ");
    scanf("%d", &quant_de_macas);

    //Calcular o preço de acordo com a quantidade de maças
    if(quant_de_macas < 12){
        preco_final = quant_de_macas * 1.30;
    }
    else if (quant_de_macas >= 12){
        preco_final = quant_de_macas * 1.00;
    }

    printf("O preço final é: R$%.2f", preco_final);

    return 0;
}