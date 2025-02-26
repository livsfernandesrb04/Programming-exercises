#include <stdio.h>

int main () {

    float n1, n2, media;

    do {
        printf("Insira a nota da primeira avaliação: ");
        scanf("%f", &n1);
    } while (n1 > 10 || n1 < 0);

    do {   
        printf("Insira a nota da segunda avaliação: ");
        scanf("%f", &n2);
    } while (n2 > 10 || n2 < 0);
    
    media = (n1 + n2) / 2;

    printf("Média simples: %.2f", media);

    return 0;
}