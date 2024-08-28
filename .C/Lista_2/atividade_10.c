#include <stdio.h>

int main() {
    //Receber o nome, a altura e o sexo do pessoa
    char nome[20];
    float altura;
    char sexo;
    float peso_ideal;

    printf("Insira seu nome: ");
    scanf("%c", &nome);

    printf("Insira sua altura (em metros): ");
    scanf("%f", &altura);

    printf("Insira o sexo (M ou F): ");
    scanf("%c", &sexo);

    //Calcular o peso ideal de acordo com o sexo da pessoa
    if (sexo == 'M' || sexo == 'm')
    {
        peso_ideal = (72,7 * altura) - 58;
    }
    else if (sexo == 'F' || sexo == 'f')
    {
        peso_ideal = (62,1* altura) - 44,7;
    }
    
    printf("Olá, %c! seu peso ideal é %.1f kg\n", nome, peso_ideal);

    return 0;
}