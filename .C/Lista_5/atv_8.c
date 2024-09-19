#include <stdio.h>

int main(){

    int A[10];

    for (int i = 0; i < 10; i++)
    {
        printf("Insira um número: ");
        scanf("%d", &A[i]);
    }

    for (int i = 0; i < 10 - 1; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (A[i] > A[j])
            {
                int temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }


    printf("Vetor em ordem crescente: \n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", A[i]);
    }
    
    return 0;
}