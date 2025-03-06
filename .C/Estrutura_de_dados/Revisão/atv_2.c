#include <stdio.h>

int main() {
    int i;

    printf("Insira um número: ");
    scanf("%d", &i);

    if (i > 0) {
        printf("%d é positivo", i);
    }
    else if (i < 0) {
        printf("%d é negativo", i);
    }
    else if (i == 0) {
        printf("%d é zero", i);
    }
    
    return 0;
}