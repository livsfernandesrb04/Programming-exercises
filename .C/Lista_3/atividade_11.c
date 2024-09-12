#include <stdio.h>

int main() {

    int i, j;

    do {
        printf("Insira um número inteiro maior que zero: ");
        scanf("%d", &i);
    } while (i <= 0);
    
    for (j = 1; j <= i; j++) {
        printf("%d ", j);
    }
    return 0;
}