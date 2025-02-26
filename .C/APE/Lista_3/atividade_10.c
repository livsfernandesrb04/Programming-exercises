#include <stdio.h>

int main() {

    int n, i;

    printf("Insira um número inteiro: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("%d", i);
    }
    return 0;
}