#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>

int main() {
    
    char texto[101];
    char textoInvertido[101];
    char textoFiltrado[101];
    int j = 0;

    setlocale(LC_ALL, "Portuguese");

    printf("Digite o texto para analisar: ");
    fgets(texto, 101, stdin);

    //Remover a linha extra que o fgtes captura
    int tamanho = strlen(texto);
    if (texto[tamanho - 1] == '\n')
    {
        texto[tamanho - 1] = '\0';
        tamanho--;
    }

    //Filtrar apenas as letras e converter para minúscula
    for (int i = 0; i < tamanho; i++)
    {
        if (isalpha(texto[i]))
        {
            textoFiltrado[j++] = tolower(texto[i]);
        }
    }

    textoFiltrado[j] = '\0';

    int tamanhoTxtFilt = strlen(textoFiltrado);
    
    //Inverter a string
    for (int i = 0; i < tamanhoTxtFilt; i++)
    {
        textoInvertido[i] = textoFiltrado[tamanhoTxtFilt - i - 1];
    }

    textoInvertido[tamanhoTxtFilt] = '\0';

    //Comparar as duas strings
    if (strcmp (textoFiltrado, textoInvertido) == 0)
    {
        printf("A string é um palíndromo.\n");
    }
    else
    {
        printf("A string não é um palíndromo.\n");
    }

    return 0;
}