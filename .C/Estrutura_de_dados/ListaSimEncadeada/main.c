#include <stdio.h>
#include <locale.h>
#include "lista.h"

int main() {

    setlocale(LC_ALL, "Portuguese_brazil");
    Lista* l = criarLista();
    
    inserirNum(l, 25);
    inserirNum(l, 35);
    inserirNum(l, 13);
    inserirNum(l, 10);
    inserirNum(l, 20);
    inserirNum(l, 30);
    inserirNum(l, 5);
    

    mostrarLista(l); 

    TipoElemento valor;
    if (acessarElemento(l, 5, &valor)) {
        printf("Elemento na posição 5: %d\n", valor); 
    }

    removerNaPosicao(l, 1); 
    mostrarLista(l);         

    destruirLista(l);
    return 0;
}
