#include <stdio.h>

int main() {

    int a, b;

    printf("Digite um número: ");
    scanf("%d", &a);

    printf("Digite outro número: ");
    scanf("%d", &b);

    if (a > b) {
        printf("%d,%d", a, b);
    }
    else if(b < a) {
        printf("%d,%d", b, a);
    }
    else {
        printf("Os valores são iguais: %d, %d", a, b);
    }
    
    return 0;
}