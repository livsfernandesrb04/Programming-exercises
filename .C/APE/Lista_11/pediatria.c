#include <stdio.h>
#include "pediatria.h"

IMCInfantil calcula_imc(paciente_t *crianca){
    imc = crianca->peso / (crianca->altura * crianca->altura);

    
    

    if (crianca->genero == 'f' || crianca->genero == 'F')
    {
        /* code */
    }
    else if (crianca->genero == 'm' || crianca->genero == 'M' )
    {
        switch (crianca->idade){
        //Se a idade da criança for 6 anos
        case crianca->idade == 6 && imc < 14.5: return ABAIXO, break;
        case crianca->idade == 6 && imc >= 14.5 && imc <= 16.6: return NORMAL, break;
        case crianca->idade == 6 && imc >= 16.7 && imc <= 18.0: return SOBREPESO, break;
        case crianca->idade == 6 && imc > 18.0: return OBESIDADE, break;

        //Se a idade da criança for 7 anos
        case crianca->idade == 7 && imc < 15.0: return ABAIXO, break;
        case crianca->idade == 7 && imc >= 15.0 && imc <= : return NORMAL, break;
        case crianca->idade == 7 && imc >= 16.7 && imc <= 18.0: return SOBREPESO, break;
        case crianca->idade == 7 && imc > 18.0: return OBESIDADE, break;

        //Se a idade da criança for 8 anos
        case crianca->idade == 8 && imc < 15.0: return ABAIXO, break;
        case crianca->idade == 8 && imc >= 15.0 && imc <= : return NORMAL, break;
        case crianca->idade == 8 && imc >= 16.7 && imc <= 18.0: return SOBREPESO, break;
        case crianca->idade == 8 && imc > 18.0: return OBESIDADE, break;

        //Se a idade da criança for 9 anos
        case crianca->idade == 9 && imc < 15.0: return ABAIXO, break;
        case crianca->idade == 9 && imc >= 15.0 && imc <= : return NORMAL, break;
        case crianca->idade == 9 && imc >= 16.7 && imc <= 18.0: return SOBREPESO, break;
        case crianca->idade == 9 && imc > 18.0: return OBESIDADE, break;
        
        //Se a idade da criança for 10 anos
        case crianca->idade == 10 && imc < 15.0: return ABAIXO, break;
        case crianca->idade == 10 && imc >= 15.0 && imc <= : return NORMAL, break;
        case crianca->idade == 10 && imc >= 16.7 && imc <= 18.0: return SOBREPESO, break;
        case crianca->idade == 10 && imc > 18.0: return OBESIDADE, break;

        //Se a idade da criança for 11 anos
        case crianca->idade == 11 && imc < 15.0: return ABAIXO, break;
        case crianca->idade == 11 && imc >= 15.0 && imc <= : return NORMAL, break;
        case crianca->idade == 11 && imc >= 16.7 && imc <= 18.0: return SOBREPESO, break;
        case crianca->idade == 11 && imc > 18.0: return OBESIDADE, break;
    
    default:
        break;
    }
    }
    
    
    
    
}

paciente_t * primeiro_paciente(char *nome, int idade, float peso, float altura, char genero){
    paciente_t *paciente;
    paciente = (paciente*) malloc(sizeof(paciente_t));
    if (paciente == NULL){
        printf("Houve um erro na alocação de memória.");
        return NULL;
    }

    strcat(paciente->nome, *nome);
    paciente->idade = idade;
    paciente->peso = peso;
    paciente->altura = altura;
    strcat(paciente->genero, genero);

    paciente = paciente->prox;
    
}

void novo_paciente(paciente_t *primeiro, char *nome, int idade, float peso, float altura, char genero){
    paciente_t *paciente;
    paciente = (paciente*) malloc(sizeof(paciente_t));
    if (paciente == NULL){
        printf("Houve um erro na alocação de memória.");
        return NULL;
    }

    strcat(paciente->nome, *nome);
    paciente->idade = idade;
    paciente->peso = peso;
    paciente->altura = altura;
    strcat(paciente->genero, genero);
}