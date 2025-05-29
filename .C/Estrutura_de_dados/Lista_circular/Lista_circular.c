#include <stdio.h>
#include <stdlib.h>
#include "Lista_circular.h"


void inicializarLista(Lista* l) {
    l->inicio = NULL;
    l->atual = NULL;
    l->quantum = 0;
    l->processosRestantes = 0;
}

void adicionarProcesso(Lista* l, int id, int tempExec){
    No* novo = malloc(sizeof(No));
    novo->id_processo = id;
    novo->total_exec = tempExec;
    novo->temp_rest = tempExec;
    novo->prox = NULL;

    if (l->inicio == NULL){
        l->inicio = novo;
        novo->prox = novo;
    } else {
        No* ultimo = l->inicio;
        while (ultimo->prox != l->inicio) {
            ultimo = ultimo->prox;
        }

        ultimo->prox = novo;
        novo->prox = l->inicio;
    }
    l->processosRestantes++;
}

void algoritmoRoundRobin(Lista* l){
    if (l->inicio == NULL) {
        printf("Nenhum processo na lista.\n");
        return;
    }

    if(l->atual == NULL) {
        l->atual = l->inicio;
    }
    
    printf("--- Iniciando o algoritmo Round Robin ---\n");
    
    while (l->processosRestantes > 0) {

        if(l->atual->temp_rest <= 0) {
            l->atual = l->atual->prox;
            continue;
        }

        printf("Processo P%d (restante: %d)\n", l->atual->id_processo, l->atual->temp_rest);

        int tempo_exec = (l->atual->temp_rest < l->quantum)? l->atual->temp_rest : l->quantum;

        l->atual->temp_rest -= tempo_exec;

        if (l->atual->temp_rest <= 0) {
            printf("->P%d executado por %d unidades (restam 0) Finalizado\n", l->atual->id_processo, l->atual->temp_rest);
        

            l->processosRestantes--;

            No* anterior = l->inicio;
            while (anterior->prox != l->atual){
                anterior = anterior->prox;
            }

            anterior->prox = l->atual->prox;

            if(l->atual == l->inicio) {
                l->inicio = l->atual->prox;
            }

            if (l->atual == l->atual->prox) {
                free(l->atual);
                l->inicio = NULL;
                l->atual = NULL;
                break;
            }

            No* remover = l->atual;
            l->atual = anterior->prox;
            free(remover);
        } else {
            printf("-> P%d executado por %d unidades (restam %d)\n", l->atual->id_processo, tempo_exec, l->atual->temp_rest);
            l->atual = l->atual->prox;
        }
    }
    printf("--- Todos os processos foram finalizados ---\n");
    
}