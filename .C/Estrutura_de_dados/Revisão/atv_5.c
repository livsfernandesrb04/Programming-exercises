#include <stdio.h>

int main() {
    int quant_num;
    float soma;

    printf("Quantos numeros deseja inserir? ");
    scanf("%d", &quant_num);

    int vetor[quant_num];

    for (int i = 0; i < quant_num; i++) {
        printf("Insira o %d numero da média: ", i + 1);
        scanf("%d", &vetor[i]);
        soma += vetor[i]; 
    }
    
    float media = soma / (float)quant_num;

    printf("A média dos números é %.2f", media);

    return 0;
}