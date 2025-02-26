#include <stdio.h>
#include

typedef struct Aluno {
 char nome[100];
 int faltas;
 float nota;
}aluno_t;

 int main() {
    /*Crie um programa em C que carregue dinamicamente (via malloc) um novo aluno, carregue os dados dele e exiba em um printf. Apresente também se ele foi ou não aprovado.*/
    aluno_t *aluno;
    aluno = malloc(aluno_t);

    if (aluno == NULL) {
      
    }
    

    return 0;
 }