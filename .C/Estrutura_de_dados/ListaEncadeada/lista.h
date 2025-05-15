#ifndef LISTA_H
#define LISTA_H

typedef int TipoElemento;

typedef struct no {
    TipoElemento dado;
    struct no* prox;
} No;

typedef struct {
    No* inicio;
} Lista;


Lista* criarLista();
int inserirNum(Lista* l, TipoElemento valor);
int inserirInicio(Lista* l, TipoElemento valor);
int removerNaPosicao(Lista* l, int posicao);
int acessarElemento(Lista* l, int posicao, TipoElemento* valor);
void mostrarLista(Lista* l);
void destruirLista(Lista* l);

#endif
