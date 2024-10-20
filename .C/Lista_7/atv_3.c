/*Faça um programa que leia 2 valores inteiros e chame uma função que receba estas 2 variáveis e troque o seu conteúdo, ou seja, esta função é chamada passando duas variáveis A e B por exemplo e, após a execução da
função, A conterá o valor de B e B terá o valor de A. Exiba os valores na função main*/
#include <stdio.h>

int trocar_valor(int a, int b){
    int buffer;

    buffer = a;
    a = b;
    b = buffer;

    return a, b;
}


int main() {
    int a, b;

    printf("Insira dois números inteiros para a e b, respectivamente: ");
    scanf("%d %d", &a, &b);

    printf("Novos valores de a e b são:\na = %d\nb = %d ", trocar_valor(a, b));
    
    return 0;
}