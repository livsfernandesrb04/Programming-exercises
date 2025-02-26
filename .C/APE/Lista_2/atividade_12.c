#include <stdio.h>

int main() {

    //Ler o número da conta do cliente, saldo, débito e crédito.
    int num_conta;
    float saldo, debito, credito, saldo_atual;

    printf("Insira o número da conta: ");
    scanf("%d", &num_conta);

    printf("Insira o saldo da conta: ");
    scanf("%f", &saldo);

    printf("Insira o debito da conta: ");
    scanf("%f", &debito);

    printf("Insira o credito da conta: ");
    scanf("%f", &credito);

    //Calcular e escrever o saldo atual
    saldo_atual = saldo - debito + credito;
    printf("O saldo atual: %.2f\n", saldo_atual);

    //Testar se o saldo é positivo ou negativo
    if (saldo_atual >= 0)
    {
        printf("Saldo Positivo");
    }
    else {
        printf("Saldo Negativo");
    }

    return 0;
}