#include <stdio.h>

int main() {
    int num;

    do {
        printf("Insira um numero positivo: ");
        scanf("%d", num);
    } while(num <= 0);

    return 0;
}