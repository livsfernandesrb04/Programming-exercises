#include <stdio.h>

int main() {
    int num, fatorial = 1;

    do {
        printf("Insira um numero positivo: ");
        scanf("%d", &num);
    } while (num <= 0);

    do {
        fatorial *= num;
        num = num - 1;
    } while (num != 0);
    
    printf("Fatorial: %d", fatorial);

    return 0;
}