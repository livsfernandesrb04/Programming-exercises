#include <stdio.h>

int main() {

    int a, b;

    printf("Digite um número: ");
    scanf("%d", &a);

    printf("Digite outro número: ");
    scanf("%d", &b);

    if(a > b) {
        printf("O maior número é: %d\n", a);
    }
    else if(b > a) {
        printf("O maior número é: %d\n", b);
    }
    else {
        printf("Os números são iguais");
    }
    
    return 0;
}