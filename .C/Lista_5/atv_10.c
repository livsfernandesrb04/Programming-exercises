#include <stdio.h>

int main(){

    int vetor[20];
    int novo_vetor[19];
    int a, k = 0;
    int encontrado = 0;

    for (int i = 0; i < 20; i++)
    {
        printf("Insira um número: \n");
        scanf("%d", &vetor[i]);
    }

    printf("Insira um número qualquer para verificar: \n");
    scanf("%d", &a);

    for (int i = 0; i < 20; i++)
    {
        if( a != vetor[i]){
            novo_vetor[k++] = vetor[i];
        }
        else{
            encontrado = 1;
        }
    }

    if(encontrado == 1) {
        printf("Novo vetor: \n");
        for (int i = 0; i < k; i++)
        {
            printf("%d", novo_vetor[i]);
        }
        printf("\n");
    }
    else {
        printf("Número %d não foi encontrado.\n", a);
    }
    
    return 0;
}