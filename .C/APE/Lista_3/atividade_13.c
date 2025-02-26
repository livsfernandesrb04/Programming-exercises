#include <stdio.h>

int main() {

    int i, j, k, resultado;

    do {
        printf("Insira um número: ");
        scanf("%d", &i);
    } while (i < 1 || i > 10);
    

    for(j = i; j < i+1; j++){
        for (k = 1; k <=10 ; k++)
        {
            resultado = i * k;
            printf("%d x %d = %d\n", i, k, resultado);
        }
    }
    return 0;
}