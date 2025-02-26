#include <stdio.h>

int main() {

    int i, j, resultado;

    for(i = 8; i < 9; i++){
        for (j = 1; j <=10 ; j++)
        {
            resultado = i * j;
            printf("%d x %d = %d\n", i, j, resultado);
        }
    }
    return 0;
}