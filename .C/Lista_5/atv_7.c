#include <stdio.h>
int main(){

    float tempMediaDiaria[365];
    float menorTemp, maiorTemp, tempMedia, somaTemp = 0;
    int contador;

    for (int i = 0; i < 365; i++)
    {
        printf("Insira a tempetura media dos dias do ano: ");
        scanf("%f", &tempMediaDiaria[i]);
        somaTemp += tempMediaDiaria[i];
    }

    tempMedia = somaTemp / 365;
    menorTemp = tempMediaDiaria[0];
    maiorTemp = tempMediaDiaria[0];

    for (int i = 0; i < 365; i++)
    {
        if (tempMediaDiaria[i] < menorTemp)
        {
            menorTemp = tempMediaDiaria[i];
        }

        if (tempMediaDiaria[i] > maiorTemp)
        {
            maiorTemp = tempMediaDiaria[i];
        }
        
        if (tempMediaDiaria[i] < tempMedia)
        {
            contador++;
        }
    }
    printf("Menor temperatura do ano: %.2f\n", menorTemp);
    printf("Maior temperatura do ano: %.2f\n", maiorTemp);
    printf("Temperatura média anual: %.2f\n", tempMedia);
    printf("O número de dias no ano em que a temperatura foi inferior a média anual: %d\n", contador);
}