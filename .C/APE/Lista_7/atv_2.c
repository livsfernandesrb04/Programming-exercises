#include <stdio.h>

int main() {
    int i = 24, j = 154;

    int* pont_i = &i;
    int* pont_j = &j;

    printf("Endereço de i: %p\n", pont_i);
    printf("Endereço de j: %p\n", pont_i);

    if (pont_i > pont_j) {
        printf("O maior endereço é: %p", pont_i);
    } 
    else if (pont_j > pont_i){
        printf("O maior endereço é: %p", pont_j);
    } 
    else {
        printf("Os endereços são iguais.");
    }
    
    return 0;
}