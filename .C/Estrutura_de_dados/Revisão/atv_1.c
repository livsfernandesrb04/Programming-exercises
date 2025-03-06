#include <stdio.h>

int main() {
    int a, b, c;

    printf("Insira um número: ");
    scanf("%d", &a);

    printf("Insira um número: ");
    scanf("%d", &b);

    printf("Insira um número: ");
    scanf("%d", &c);

    if (a > b && a > c) {
        printf("%d", a);
    }
    else if (b > a && b > c) {
        printf("%d", b);
    }
    else if (c > a && c > b) {
        printf("%d", c);
    }
    else if( a == b && a == c){
        printf("Os números são iguais.");
    }
    
    return 0;
}