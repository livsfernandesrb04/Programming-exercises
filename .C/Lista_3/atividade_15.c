#include <stdio.h>

int main() {

    int contador, soma;

    for (int i = 15; i <= 100; i++) {
        soma = soma + i;
        contador++;
    }

    float media = (float)soma / (float)contador;

    printf("Media aritmetica : %.2f\n", media);

    return 0;
}