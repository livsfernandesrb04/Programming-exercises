#include <stdio.h>

int main() {
    //Ler o salário fixo e o valor das vendas 
    float salario_fixo, vendas_por_vendedor, comissao, salario_total;

    printf("Digite o salário fixo do vendedor: ");
    scanf("%f", &salario_fixo);

    printf("Digite o valor das vendas efetuadas pelo vendedor: ");
    scanf("%f", &vendas_por_vendedor);

    //Testar se o valor das compras ultrapassa 1.500
    if(vendas_por_vendedor <= 1.500){
        comissao = vendas_por_vendedor * 0.03;
    }
    else if (vendas_por_vendedor > 1.500)
    {
        comissao = (1500 * 0.03) + (vendas_por_vendedor - 1.500) * 0.05;
    }

    salario_total = salario_fixo + comissao;

    printf("O salario final é R$%.2f\n", salario_total);

    return 0;
}