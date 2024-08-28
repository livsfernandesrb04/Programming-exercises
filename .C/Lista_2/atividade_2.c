#include <stdio.h>

int main() {

    int input;

    printf("Digite um número: ");
    scanf("%d", &input);

    if(input >= 0){
        printf("Esse número é positivo\n");
    }
    else {
        printf("Esse número é negativo\n");
    }

    return 0;
}