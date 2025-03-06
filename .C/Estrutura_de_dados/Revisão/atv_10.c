#include <stdio.h>

int Soma() {
    return a + b;
}
int main() {
    int a, b;
    int* pont_a = &a;
    int* pont_b = &b;
    //Solicitar ao usuario dois números inteiros utilizar ponteiros para armazenar esses números.
    //Criar uma função que retorne a soma desses números usando ponteiros.
    int soma = Soma();

    printf("%d + %d = %", a, b, soma);
    return 0;
}