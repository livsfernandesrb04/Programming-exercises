#include <stdio.h>

int main() {

    int input;

    printf("Digite um número: ");
    scanf("%d", &input);

    if (input > 10) {
        printf("É MAIOR QUE 10!")
    }
    else {
        printf("NÃO É MAIOR QUE 10!")
    }

    return 0;
}