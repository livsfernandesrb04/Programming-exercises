#include <stdio.h>

int main() {

    int hora_de_inicio, hora_de_fim, duracao;

    printf("Insira a hora de início do jogo (1 - 24): ");
    scanf("", &hora_de_inicio);

    printf("Insira a hora de início do jogo (1 - 24): ");
    scanf("", &hora_de_fim);

    if (hora_de_fim == hora_de_inicio){
        duracao = 24;
    }
    else if (hora_de_fim < hora_de_inicio){
        duracao = (24 - hora_de_inicio) + hora_de_fim;
    }
    else if (hora_de_fim > hora_de_inicio){
        duracao = hora_de_fim - hora_de_inicio;
    }
    
    printf("A duração do jogo foi de %d horas\n", duracao);

    return 0;
}