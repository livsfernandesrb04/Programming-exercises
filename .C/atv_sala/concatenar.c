#include <stdio.h>
#include <string.h>

int main() {

    char nomeCompleto[101];
    char boasVindas[101];
    char nome[15];

    //Receber o nome completo do usuário
    printf("Insira o seu nome completo: ");
    fgets(nomeCompleto, 101, stdin);

    //Separar o primeiro nome do usuário
    for (int i = 0; nomeCompleto[i] != ' '; i++)
    {
        nome[i] = nomeCompleto[i];   
    }

    //Concatenar com a string "Bem-vindo" com o nome
    strcpy(boasVindas, "Bem-vindo ");
    strcat(boasVindas, nome);

    printf("%s\n", boasVindas);

    return 0;
}