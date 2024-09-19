#include <stdio.h>
int main(){

    int N;

    do {
        printf("Insira o tamanho dos vetores: ");
        scanf("%d", &N);
    } while (N <= 0);

    int A[N];
    int B[N];
    int soma[N];

    for (int i = 0; i < N; i++)
    {
        printf("Insira os números do vetor A:");
        scanf("%d", &A[i]);
    }

    for (int i = 0; i < N; i++)
    {
        printf("Insira os números do vetor B:");
        scanf("%d", &B[i]);
    }

    for (int i = 0; i < N; i++)
    {
        soma[i] = A[i] + B[i];
        printf("%d ", soma[i]);
    }

    return 0;
}