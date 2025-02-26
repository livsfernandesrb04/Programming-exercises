#include <stdio.h>

int main() {

    float nota1, nota2, media;

    printf("Digite a nota da primeira avaliação: ");
    scanf("%f", nota1);

    printf("Digite a nota da segunda avaliação: ");
    scanf("%f", nota2);

    media = (nota1 + nota2) / 2;

    if (media >= 7.0) {
        printf("Aprovado. Média: %.2f", media);
    }
    else {
        printf("Não aprovado. Média: %.2f", media);
    }

    return 0;
}