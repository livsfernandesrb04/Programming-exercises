/* Faça um algoritmo que leia uma string e calcule o seu tamanho.
(a) Calcule utilizando o strlen.
(b) Calcule sem utilizar o strlen.
(c) Compare os dois resultados.*/
#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
    
    char texto[101];
    int comStrlen, SemStrlen;
    char 

    setlocale(LC_ALL, "Portuguese");

    printf("Digite a senha: ");
    fgets(texto, 101, stdin);

    //Calcular o tamanho da string utilizando strlen
    comStrlen = strlen(texto);
    
    //Remover a linha extra que o fgtes captura
    int tamanho = strlen(texto);
    if (texto[tamanho - 1] == '\n')
    {
        texto[tamanho - 1] = '\0';
        tamanho--;
    }

    //Calcular o tamanho da string SEM o strlen
    do
    {
        texto[i]
    } while (strcom() != 0);
    
    

    //Comparar os dois resultados
    printf("O resultado de Strlen é: %d", comStrlen);
    printf("O resultado sem utilizar Strlen é: %d", SemStrlen);

    return 0;
}