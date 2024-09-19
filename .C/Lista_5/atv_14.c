#include <stdio.h>

int main(){

    int matriz[3][3];
    int a, b, determinante;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Insira o número que será incluído na matriz: ");
            scanf("%d", &matriz[i][j]);
        }
    }

    a = (matriz[0][0] * matriz[1][1] * matriz[2][2]) + (matriz[0][1] * matriz[1][2] * matriz[2][0]) + (matriz[0][2] * matriz[1][0] * matriz[2][1]);
    b = (matriz[0][2] * matriz[1][1] * matriz[2][0]) + (matriz[0][0] * matriz[1][2] * matriz[2][1]) + (matriz[0][1] * matriz[1][0] * matriz[2][2]);


    determinante = a - b;

    printf("Determinante da matriz: %d", determinante);

    return 0;
}