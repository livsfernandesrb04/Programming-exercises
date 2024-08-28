#include <stdio.h>

int main() {

    float horas_trabalhadas, salario_hora, salario_final, hora_extra;

    printf("Digite o número de horas trabalhadas: ");
    scanf("%f", &horas_trabalhadas);

    printf("Digite o salário por hora: ");
    scanf("%f", &salario_hora);

    if (horas_trabalhadas > 160){
        hora_extra = (horas_trabalhadas - 160 ) * (salario_hora * 1.5); 
    }
    else{
        hora_extra = 0;
    }

    salario_final = (160 * salario_hora) + (hora_extra);

    printf("Salário total é: R$ %.2f\n", salario_final);

    return 0;
}