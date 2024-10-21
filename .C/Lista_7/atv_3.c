#include <stdio.h>

int trocar_valor(int *a, int *b){
    int buffer;

    buffer = *a;
    *a = *b;
    *b = buffer;
}

int main() {
    int a, b;

    printf("Insira dois números inteiros para a e b, respectivamente: ");
    scanf("%d %d", &a, &b);

    printf("Valores iniciais de a e b são:\na = %d\nb = %d\n", a, b);

    trocar_valor(&a, &b);

    printf("Novos valores de a e b são:\na = %d\nb = %d\n", a, b);
    
    return 0;
}