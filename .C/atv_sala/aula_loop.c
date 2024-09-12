#include <stdio.h>

int main () {
    //Calcular o fatorial de um numero inserido pelo usuario
    int i, j;
    int fatorial = 1;

    do {
        printf("Insira um numero: ");
        scanf("%d", &i);
    } while (i <= 0);

    while (i != 0) 
    {
        fatorial = fatorial * i;
        i--;,
        printf("%d, %d\n", fatorial, i);
    }
    
    printf("Fatorial = %d", fatorial);
    
    return 0;
}