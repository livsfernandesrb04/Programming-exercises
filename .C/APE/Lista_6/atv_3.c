#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
    
    char texto[101];
    char textoInvertido[101];

    setlocale(LC_ALL, "Portuguese");

    printf("Digite uma palavra ou texto curto (até 100 caracteres): ");
    fgets(texto, 101, stdin);

    //Remover a linha extra que o fgtes captura
    int tamanho = strlen(texto);
    if (texto[tamanho - 1] == '\n')
    {
        texto[tamanho - 1] = '\0';
        tamanho--;
    }
    
    //Inverter a string
    for (int i = 0; i < tamanho; i++)
    {
        textoInvertido[i] = texto[tamanho - i - 1];
    }
    textoInvertido[tamanho] = '\0';

    printf("Nova string é: %s\n", textoInvertido);

    return 0;
}