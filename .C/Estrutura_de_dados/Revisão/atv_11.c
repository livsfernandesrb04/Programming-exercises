#include <stdio.h>

//Função troca
int troca(int *pont_a, int *pont_b) {
    int buffer = *pont_a;
    *pont_a = *pont_b;
    *pont_b = buffer;
    return 0;
}

int main() {
    int a, b;
    int* pont_a = &a;
    int* pont_b = &b;

    //Receber dois ponteiros inteiros.
    printf("Insira o valor de a: ");
    scanf("%d", *pont_a);

    printf("Insira o valor de b: ");
    scanf("%d", *pont_b);
    

    //Trocar os valores apontados por eles pela função troca.
    troca(*pont_a, *pont_b);

    //Imprimir os valores após a troca
    printf("Valores apos a troca:\n");
    printf("A: %d\n", a);
    printf("B: %d\n", b);
    return 0;
}