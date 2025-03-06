/*Desenvolva um programa que solicite ao usuário quantos números ele deseja 
inserir e, em seguida, calcule e exiba a média desses números.*/
#include <stdio.h>

int main() {
    int quant_num, contador = 0;
    float soma;

    printf("Quantos numeros deseja inserir? ");
    scanf("%d", &quant_num);

    int vetor[quant_num];

    while (contador < quant_num) {
        printf("Insira o %d numero do vetor: ", contador + 1);
        scanf("%d", &vetor[contador]);
        soma = vetor[contador]
        contador++;
    }
    
    
    

    float media = soma / quant_num;




    return 0;
}