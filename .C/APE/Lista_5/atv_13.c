#include <stdio.h>
#include <stdbool.h>

int main(){

    int VET[50];
    int posicoes[50];
    int k = 0;
    bool num_repetidos = false;

    for (int i = 0; i < 50; i++)
    {
        printf("Insira o número: \n");
        scanf("%d", &VET[i]);
    }

    for (int i = 0; i < 50; i++)
    {
        for (int j = i + 1; j < 50; j++)
        {
            if (VET[i] == VET[j])
            {
                num_repetidos = true;
                posicoes[k++] = j;
            } 
        }
    }
    
    if (num_repetidos == true)
    {
        printf("Existem números repetidos nas posições:\n");
        for (int i = 0; i < k; i++)
        {
            printf("%d", posicoes[i]);
        }
        printf("\n");
    } 
    else {
        printf("Não há números repetidos no vetor.\n");
    }

    return 0;
}