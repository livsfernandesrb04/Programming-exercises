#include <stdio.h>
#include <string.h>
#include <locale.h>

//Conferir se a variavel apresenta números
char tem_numero(char a) { 
    return (a >= '0' && a <= '9');
}

//Conferir se a variavel apresenta letra maiuscula
char letra_maius(char a) { 
     return (a >= 'A' && a <= 'Z');
}

//Conferir se a variavel apresenta letra minuscula
char letra_minus(char a) { 
    return (a >= 'a' && a <= 'z');
}

int main() {

    char senha[101];
    int tamanho, temNum, temMaius, temMinus;

    setlocale(LC_ALL, "Portuguese");

    do {
        temNum = 0, temMaius = 0, temMinus = 0;

        printf("A senha deve conter:\n - No mínimo 8 caracteres e no máximo 100 caracteres.\n - Pelo menos um número.\n - Pelo menos uma letra maiúscula.\n - Pelo menos uma letra minúscula.\n");
        printf("Digite a senha: \n");
        fgets(senha, 101, stdin);

        tamanho = strlen(senha);

        //Remover o caractere de nova linha capturado pelo fgets
        if (senha[tamanho - 1] == '\n') {
            senha[tamanho - 1] = '\0';
            tamanho--;
        }
        
        //Verificar se a senha contém as especificações
        for (int i = 0; i < tamanho; i++)
        {
            if (tem_numero(senha[i])) temNum = 1;
            if (letra_maius(senha[i])) temMaius = 1;
            if (letra_minus(senha[i])) temMinus = 1;
            
        }
        
        //Exibir mensagens de erro se a senha não atender as especificações
        if (tamanho < 8 || tamanho > 100)
        {
            printf("A senha deve ter entre 8 e 100 caracteres.\n");
        }
        if (!temNum)
        {
            printf("A senha deve conter pelo menos um número.\n");
        }
        if (!temMaius)
        {
            printf("A senha deve conter pelo menos uma letra maiúscula.\n");
        }
        if (!temMinus)
        {
            printf("A senha deve conter pelo menos uma letra minúscula.\n");
        }
         
    } while (tamanho < 8 || tamanho > 100 || !temNum || !temMaius || !temMinus);

    printf("Sua senha foi registrada com sucesso!\n");

     return 0;
}