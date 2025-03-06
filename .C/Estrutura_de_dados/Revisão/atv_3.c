#include <stdio.h>

int main() {
    float salario, imposto;

    printf("Insira o salario: ");
    scanf("%f", &salario);

    if (salario <= 2000){
        printf("Isento de imposto de renda.");
    }
    else if (salario > 2000 && salario <= 4000){
        imposto = salario * 0.1;
        printf("Total de imposto a ser pago: R$%f", imposto);
    }
    else if (salario > 4000) {
        imposto = salario * 0.2;
        printf("Total de imposto a ser pago: R$%f", imposto);
    }

    return 0;
}