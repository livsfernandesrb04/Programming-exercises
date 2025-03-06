#include <stdio.h>

//Função troca
void troca(int *pont_a, int *pont_b) {
    int buffer = *pont_a;
    *pont_a = *pont_b;
    *pont_b = buffer;
}

int main() {
    int a, b;
    int* pont_a = &a;
    int* pont_b = &b;

    //Receber dois ponteiros inteiros.
    printf("Insira o valor de a: ");
    scanf("%d", pont_a);

    printf("Insira o valor de b: ");
    scanf("%d", pont_b);
    

    //Trocar os valores apontados por eles pela função troca.
    troca(pont_a, pont_b);

    //Imprimir os valores após a troca
    printf("Valores após a troca\n");
    printf("a: %d\n", a);
    printf("b: %d\n", b);
    
    return 0;
}