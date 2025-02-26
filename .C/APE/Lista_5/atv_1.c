#include <stdio.h>

int main(){

    float notas[20];
    float notas_soma;
    int contador;

    for (int i = 0; i < 20; i++)
    {
        printf("Insira as notas da turma: ");
        scanf("%f", &notas[i]);
    }

    for (int i = 0; i < 20; i++)
    {
        notas_soma += notas[i];
    }

    float media_turma = notas_soma / 20;
    
    for (int i = 0; i < 20; i++)
    {
        if (notas[i] > media_turma)
        {
            contador++;
        }
    }

    printf("Média da turma: %.2f\n", media_turma);
    printf("Número de alunos com notas acima da média: %d", contador);

    return 0;
}