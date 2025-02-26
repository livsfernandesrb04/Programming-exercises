#include <stdio.h>

int main() {

    int ano_atual, ano_de_nasc, idade;

    printf("Digite o ano atual: ");
    scanf("%d", &ano_atual);
    
    printf("Digite seu ano de nascimento: ");
    scanf("%d", &ano_de_nasc);

    idade = ano_atual - ano_de_nasc;

    if (idade >= 16){
        printf("Você poderá votar esse ano.\n");
    }
    else {
        printf("Você não poderá votar esse ano.\n")
    }
    
    return 0;
}