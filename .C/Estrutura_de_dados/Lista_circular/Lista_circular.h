#ifndef LIST_CIRCULAR_H
#define LIST_CIRCULAR_H

typedef struct no {
    int id_processo;//ID do processo
    int total_exec;//Tempo total de execução necessário
    int temp_rest;//Tempo restante
    struct no* prox;    
} No;

typedef struct {
    No* inicio;
    No* atual;
    int quantum;
    int processosRestantes;
} Lista;

void inicializarLista(Lista* l);
void adicionarProcesso(Lista* l, int id_processo, int tempoExecucao);
void algoritmoRoundRobin(Lista* l);

#endif