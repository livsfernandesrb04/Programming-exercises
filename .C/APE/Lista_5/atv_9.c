#include <stdio.h>

int main(){

    int A[11];

    for (int i = 0; i < 10; i++)
    {
        printf("Insira um número: ");
        scanf("%d", &A[i]);
    }
    printf("Adicione mais um número ao vetor: ");
    scanf("%d", &A[10]);


    for (int i = 0; i < 11 - 1; i++)
    {
        for (int j = i + 1; j < 11; j++)
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
    for (int i = 0; i < 11; i++)
    {
        printf("%d ", A[i]);
    }
    
    return 0;
}