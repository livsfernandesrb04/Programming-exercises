#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "Lista_circular.h"

int main() {
    setlocale(LC_ALL, "Portuguese");

    Lista l;
    inicializarLista(&l);

    //Obter quantum
    printf("Informe o quantum de execução: ");
    scanf("%d", &l.quantum);

    //Obter processos
    int numProcessos;
    printf("Quantos processos deseja adicionar? ");
    scanf("%d", &numProcessos);

    for (int i = 0; i < numProcessos; i++) {
        int tempoExecucao;
        printf("Informe o tempo total de execução do processo P%d: ", i + 1);
        scanf("%d", &tempoExecucao);
        adicionarProcesso(&l, i + 1, tempoExecucao);
    }

    algoritmoRoundRobin(&l);
    return 0;
}