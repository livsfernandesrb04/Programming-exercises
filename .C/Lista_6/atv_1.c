/*Faça um algoritmo para ler uma senha, com as seguintes especificações:
(a) Mínimo de 8 caracteres.
(b) Pelo menos um número.
(c) Pelo menos uma letra maiúscula.
(d) Pelo menos uma letra minúscula.
(e) Máximo de 100 caracteres.*/
#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {

    char senha[101];
    int tamanho;

    setlocale(LC_ALL, "Portuguese");

    do {
        printf("A senha deve conter:\n No mínimo 8 caracteres e no máximo 100 caracteres.\n Pelo menos um número.\n Pelo menos uma letra maiúscula.\n Pelo menos uma letra minúscula.\n");
        printf("Digite a senha: \n");
        fgets(senha, 101, stdin);
        tamanho = strlen(senha); 
    } while (tamanho < 8); //Conferir o tamanho da variável
    

    //Conferir se a variavel apresenta números
    for (int i = 0; i < tamanho; i++)
    {
        if (senha[i] == "0" || senha[i] == "1" || senha[i] == "2" || senha[i] == "3" || senha[i] == "4" || senha[i] == "5" || senha[i] == "6" || senha[i] == "7" || senha[i] == "8" || senha[i] == "9" ||)
        {
            break;
        }
    }

    //Conferir se a variavel apresenta letra minuscula
    for (int i = 0; i < tamanho; i++)
    {
        if ('A' <= senha[i] && <= 'Z')
        {
            
        }
        
    }
    

    //Conferir se a variavel apresenta letra maiuscula
    for (int i = 0; i < tamanho; i++)
    {
        
    }
    

     return 0;
}