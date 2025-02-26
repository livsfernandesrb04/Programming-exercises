#include <stdio.h>
#include "pediatria.h"

IMCInfantil calcula_imc(paciente_t *crianca){
    imc = crianca->peso / (crianca->altura * crianca->altura);

    switch (crianca->idade)
    {
    case crianca->idade == 6 && imc < 14.5:
        ABAIXO
        break;
    case crianca->idade == 6 && imc >= 14.5 && imc <= 16.6:
        NORMAL
        break;
    case crianca->idade == 6 && imc >= 16.7 && imc <= 18.0:
        SOBREPESO
        break;
    case crianca->idade == 6 && imc > 18.0:
        OBESIDADE
        break;
    
    case crianca->idade == 7 && imc < 15.0:
        ABAIXO
        break;
    case crianca->idade == 7 && imc >= 15.0 && imc <= :
        NORMAL
        break;
    case crianca->idade == 7 && imc >= 16.7 && imc <= 18.0:
        SOBREPESO
        break;
    case crianca->idade == 7 && imc > 18.0:
        OBESIDADE
        break;
    
    default:
        break;
    }
    

    if (crianca->genero)
    {
        /* code */
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
    

    //receber o nome do paciente
    printf("Digite o nome do paciente: ");
    fgets(paciente->nome, sizeof(paciente->nome), stdin);
    paciente->nome[strlen(paciente->nome) - 1 = '\0'];

    //receber a idade do paciente
    printf("Digite a idade do paciente: ");
    scanf("%d", &paciente->idade);
    fflush(stdin);

    //receber o peso do paciente
    printf("Digite o peso do paciente: ");
    scanf("%.2f", &paciente->peso);
    fflush(stdin);

    //receber a altura do paciente
    printf("Digite a altura do paciente: ");
    scanf("%.2f", &paciente->altura);
    fflush(stdin);

    //receber o genero do paciente
    printf("Digite o genero do paciente: ");
    fgets(paciente->genero, sizeof(paciente->genero), stdin);
    paciente->genero[strlen(paciente->genero) - 1 = '\0'];
}

void novo_paciente(paciente_t *primeiro, char *nome, int idade, float peso, float altura, char genero){
    //receber o nome do paciente
    printf("Digite o nome do paciente: ");
    fgets(paciente->nome, sizeof(paciente->nome), stdin);
    paciente->nome[strlen(paciente->nome) - 1 = '\0'];

    //receber a idade do paciente
    printf("Digite a idade do paciente: ");
    scanf("%d", &paciente->idade);
    fflush(stdin);

    //receber o peso do paciente
    printf("Digite o peso do paciente: ");
    scanf("%.2f", &paciente->peso);
    fflush(stdin);

    //receber a altura do paciente
    printf("Digite a altura do paciente: ");
    scanf("%.2f", &paciente->altura);
    fflush(stdin);

    //receber o genero do paciente
    printf("Digite o genero do paciente: ");
    fgets(paciente->genero, sizeof(paciente->genero), stdin);
    paciente->genero[strlen(paciente->genero) - 1 = '\0'];
}

int main(){

}