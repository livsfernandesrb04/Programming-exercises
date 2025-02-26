#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
    
    char texto[101];
    int comStrlen, SemStrlen;

    setlocale(LC_ALL, "Portuguese");

    printf("Digite uma string: ");
    fgets(texto, 101, stdin);

    //Calcular o tamanho da string utilizando strlen
    comStrlen = strlen(texto);

    //Calcular o tamanho da string SEM o strlen
    for (int i = 0; i < 100; i++)
    {
        if (texto[i] == '\n') {
            break;
        }
        else {
            SemStrlen++;
        }
    }
    
    //Comparar os dois resultados
    printf("O resultado de Strlen é: %d\n", comStrlen);
    printf("O resultado sem utilizar Strlen é: %d\n", SemStrlen);

    return 0;
}