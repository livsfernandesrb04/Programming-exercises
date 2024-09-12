#include <stdio.h>

int main() {

    int n, i, j;

    printf("Insira um numero inteiro: ");
    scanf("%d", &n);

    for (i = n ; i > 0 ; i--) {
         for ( j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
