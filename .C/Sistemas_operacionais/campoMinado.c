#include <stdio.h>
#include <stdlib.h>

void inicializarCampo(int campo[8][8]) {
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            campo[i][j] = 0; // Inicializa todas as células com 0
        }
    }
}

void exibirCampo(int campo[8][8]) {
    printf("                      CAMPO MINADO\n");
    printf("                  1 | 2 | 3 | 4 | 5 | 6 | 7 | 8  \n");
    printf("                ---------------------------------\n");
    printf("              1 |   |   |   |   |   |   |   |   |\n");
    printf("                ---------------------------------\n");
    printf("              2 |   |   |   |   |   |   |   |   |\n");
    printf("                ---------------------------------\n");
    printf("              3 |   |   |   |   |   |   |   |   |\n");
    printf("                ---------------------------------\n");
    printf("              4 |   |   |   |   |   |   |   |   |\n");
    printf("                ---------------------------------\n");
    printf("              5 |   |   |   |   |   |   |   |   |\n");
    printf("                ---------------------------------\n");
    printf("              6 |   |   |   |   |   |   |   |   |\n");
    printf("                ---------------------------------\n");

    printf("Insira as coordenadas da célula que deseja revelar: \n");
    
    printf("  1 | 2 | 3 | 4 | 5 | 6 | 7 | 8\n");
    printf("-------------------------------\n");
    for (int i = 0; i < 8; i++) {
        printf("%d ", i + 1);
        for (int j = 0; j < 8; j++) {
            if (campo[i][j] == -1) {
                printf("| * "); // Célula com bomba
            } else {
                printf("| %d ", campo[i][j]);
            }
        }
        printf("|\n-------------------------------\n");
    }
}