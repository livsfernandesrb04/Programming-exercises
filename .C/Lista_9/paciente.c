#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "paciente.h"

void alocacao_paciente(paciente_t *paciente, char *nome, short idade){

    strcpy(paciente->nome, nome);
    paciente->idade =  idade;

    srand(time(NULL));

    int numAndar = rand() %5 + 1;
    int numLeito = rand() %10 + 1;

    paciente->leito = numAndar * 100 + numLeito;
}