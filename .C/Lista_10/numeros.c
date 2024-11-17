#include <stdio.h>
#include <stdlib.h>

#define MAXVAL 10000

long int num_lista[MAXVAL];

int main() {
    FILE *arq_binario;
    long int maior = 0;
    int contador;

    arq_binario = fopen("numeros.dat", "rb");

    //verificar se o arquivo está aberto
    if(arq_binario == NULL) {
        printf("Não foi possível abrir o arquivo.");
        return 1;
    }

    //Ler os numeros e contá-los
    contador = fread(num_lista, sizeof(long), MAXVAL, arq_binario);

    //Verificar se o arquivo está vazio
    if (contador == 0) {
        printf("O arquivo está vazio.\n")
        return 1;
    }

    //Verificar qual numero é maior
    maior = num_lista[0];
    for(int i = 1; i < contador; i++) {
        if(num_lista[i] > maior) {
            maior = num_lista[i];
        }
    }

    //Imprimir os valores
    printf("Há %d números no arquivo.\n", contador);
    printf("O maior dos números é: %ld", maior);

    //Fechar arquivo
    fclose(arq_binario);
    return 0;
}