#include <stdio.h>

int main() {
    int vetor1[5];
    int vetor2[5];
    int buffer[5];

    //Preencher os vetores
    for (int i = 0; i < 5; i++) {
        printf("Insira o numero %d do vetor 1: ", i+1);
        scanf("%d", &vetor1[i]);
        printf("Insira o numero %d do vetor 2: ", i+1);
        scanf("%d", &vetor2[i]);
    }

    //Mostre os valores antes da troca
    for (int i = 0; i < 5; i++) {
        printf("%d", vetor1[i]);
    }
    printf("\n");
    for (int i = 0; i < 5; i++) {
        printf("%d", vetor2[i]);
    }
    printf("\n");
    
    //Trocar os valores entre os vetores
    for (int i = 0; i < 5; i++) {
        buffer[i] = vetor1[i];
        vetor1[i] = vetor2[i];
        vetor2[i] = buffer[i];
    }
    
    
    //Depois da troca
    for (int i = 0; i < 5; i++) {
        printf("%d", vetor1[i]);
    }
    printf("\n");
    for (int i = 0; i < 5; i++) {
        printf("%d", vetor2[i]);
    }
    printf("\n");
    
    return 0;
}