#include <stdio.h>
#include <stdlib.h>

int main(){
    int campo[8][8];
    inicializarCampo(campo);
    exibirCampo(campo);

    int linha, coluna;
    printf("Insira as coordenadas da célula que deseja revelar (linha coluna): ");
    scanf("%d %d", &linha, &coluna);
    
    revelarCelula(campo, linha - 1, coluna - 1); // Ajusta para índice 0
    exibirCampo(campo);

    return 0;
}