#include <stdio.h>

int main(){

    int A[20];

    for (int i = 0; i < 20; i++)
    {
        printf("Insira um número: \n");
        scanf("%d", &A[i]);
    }
    
    for (int i = 19; i >= 0; i--)
    {
        printf("%d ", A[i]);
    }

    return 0;
}