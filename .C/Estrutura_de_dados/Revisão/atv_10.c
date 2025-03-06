#include <stdio.h>

int Soma(int *pont_a, int *pont_b) {
    return *pont_a + *pont_b;
}
int main() {
    int a, b;
    int* pont_a = &a;
    int* pont_b = &b;
    
    //Solicitar ao usuario dois números inteiros utilizar ponteiros para armazenar esses números.
    printf("Insira um número inteiro: ");
    scanf("%d", pont_a);

    printf("Insira mais um número inteiro: ");
    scanf("%d", pont_b);

    int soma = Soma(pont_a, pont_b);

    printf("%d + %d = %d", a, b, soma);
    return 0;
}