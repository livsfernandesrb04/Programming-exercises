#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Prótotipo de variáveis
int trocas = 0, comparacoes = 0;

//Trocar os elementos de posição
void troca(int vetor[], int i, int j){
    int temp = vetor[i];
    vetor[i] = vetor[j];
    vetor[j] = temp; 
    trocas++;
}

//Função partição
int particiona(int vetor[], int inicio, int fim){

    int pivo = vetor[inicio];
    int pivo_indice = inicio + 1;

    for(int i = inicio + 1; i <= fim; i++){
        comparacoes++;
        if (vetor[i] <= pivo) {
            troca(vetor, i, pivo_indice);
            pivo_indice++;
        }
    }

    troca(vetor, inicio, pivo_indice - 1);

    return pivo_indice - 1;
}

void quickSort(int vetor[], int inicio, int fim){
    if(inicio < fim) {
        int pivo_indice = particiona(vetor, inicio, fim);
        quickSort(vetor, inicio, pivo_indice - 1);
        quickSort(vetor, pivo_indice + 1, fim);
    }
}

int main(){
    int vetor[] = {72, 34, 84, 21, 5, 16, 43, 50};
    int tam_vetor = sizeof(vetor) / sizeof(int);
    clock_t ini, fim;

    trocas = 0;
    comparacoes = 0;

    ini = clock();
    quickSort(vetor, 0, tam_vetor - 1);
    fim = clock();

    for (int i = 0; i < tam_vetor; i++){
        printf("%d ", vetor[i]);
    }
    printf("\n");
    
    double tempo_total = ((double) (fim - ini)) / CLOCKS_PER_SEC;
    printf("Tempo de execução: %f segundos, %d trocas e %d comparações.\n", tempo_total, trocas, comparacoes);

    return 0;
}