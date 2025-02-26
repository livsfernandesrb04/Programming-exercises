#include <stdio.h>

void separar_partes(float num, int *inteiro, float *frac){
    *inteiro = (int)num;
    *frac = num - *inteiro;
}

int main() {

    float num;
    int inteiro;
    float frac;

    printf("Insira um float: ");
    scanf("%f", &num);

    separar_partes(num, &inteiro, &frac);

    printf("Número: %.2f\n", num);
    printf("Parte inteira do número: %d\n", inteiro);
    printf("parte fracionária do número: %.2f\n", frac);

    return 0;
}